#include <time.h>
#include <stdio.h>

int main() {
    struct timespec tp;
    if (clock_gettime(CLOCK_MONOTONIC_RAW, &tp) != 0) {
        perror("clock_gettime failed");
        return 1;
    }

    // 转换为浮点秒
    double time_s = tp.tv_sec + tp.tv_nsec * 1e-9;

    // 打印，保留小数点后三位
    printf("%.3f\n", time_s);

    return 0;
}
// gcc -o monotime.arm monotime.c
// gcc -o monotime.amd monotime.c