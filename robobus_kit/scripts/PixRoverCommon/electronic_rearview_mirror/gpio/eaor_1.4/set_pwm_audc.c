#include <gpiod.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <sched.h>

#ifndef CONSUMER
#define CONSUMER "Consumer"
#endif

#define TARGET_FREQ 30       // 30Hz
#define FRAME_TIME_NS (1000000000 / TARGET_FREQ)  // 33,333,333 ns (33.333ms)

int main(int argc, char **argv)
{
    char *chipname = "gpiochip0";
    unsigned int line_num_456 = 108;    // GPIO 456 (456 - 348)
    unsigned int val;
    struct gpiod_chip *chip;
    struct gpiod_line *line456;
    int i, ret;

    chip = gpiod_chip_open_by_name(chipname);
    if (!chip) {
        printf("Open chip by name failed. name: %s\n", chipname);
        goto end;
    }

    line456 = gpiod_chip_get_line(chip, line_num_456);
    if (!line456) {
        printf("Get line failed. line_num: %u\n", line_num_456);
        goto close_chip;
    }

    ret = gpiod_line_request_output(line456, CONSUMER, 0);
    if (ret < 0) {
        printf("Request line456 as output failed\n");
        goto release_line456;
    }

    /* Blink 20 times */
    val = !0;
    struct timespec next_frame;
    struct timespec target_time;
    clock_gettime(CLOCK_REALTIME, &next_frame);
    next_frame.tv_nsec = (next_frame.tv_nsec / 1000000000 + 1) * 1000000000; // 对齐到下一个整毫秒
    if (next_frame.tv_nsec >= 1000000000) {
        next_frame.tv_sec++;
        next_frame.tv_nsec -= 1000000000;
    }
    target_time = next_frame;

    for (i = 10000000; i > 0; i--) {
        struct timespec ts = {
            .tv_sec = 0, 
            .tv_nsec = 1660000  // 1.6ms
        };
        long long total_ns = target_time.tv_sec * 1000000000LL + target_time.tv_nsec + FRAME_TIME_NS + (i%3==0);
        target_time.tv_sec = total_ns / 1000000000;
        target_time.tv_nsec = total_ns % 1000000000;
        
        printf("%ld.%ld\n", target_time.tv_sec, target_time.tv_nsec);

        clock_nanosleep(CLOCK_REALTIME, TIMER_ABSTIME, &target_time, NULL);
                    
        ret = gpiod_line_set_value(line456, 1);
        if (ret < 0) {
            printf("Set line456 output failed. val: %u\n", val);
            goto release_line456;
        }
        // 1.6ms high level
        clock_nanosleep(CLOCK_REALTIME, 0, &ts, NULL);
        
        val = !val;
        ret = gpiod_line_set_value(line456, 0);
        if (ret < 0) {
            printf("Set line456 output failed. val: %u\n", val);
            goto release_line456;
        }

        val = !val;
    }
    gpiod_line_set_value(line456, 0);

release_line456:
    gpiod_line_release(line456);
close_chip:
    gpiod_chip_close(chip);
end:
    return 0;
}
