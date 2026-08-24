#include <gpiod.h>
#include <stdio.h>
#include <unistd.h>


#include <time.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <sched.h>



#ifndef	CONSUMER
#define	CONSUMER	"Consumer"
#endif

#define TARGET_FREQ 30       // 30Hz
#define FRAME_TIME_NS (1000000000 / TARGET_FREQ)  // 33,333,333 ns (33.333ms)



int main(int argc, char **argv)
{
	char *chipname = "gpiochip0";
	unsigned int line_num_456 = 98 ;	// GPIO 446 (446 - 348)
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

    

    gpiod_line_set_value(line456, 0);

release_line456:
	gpiod_line_release(line456);
close_chip:
	gpiod_chip_close(chip);
end:
	return 0;
}
