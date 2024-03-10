#include <stdio.h>
#include <time.h>

int main(void)
{
    int calculations = 0;
    clock_t start_time, current_time;

    start_time = clock();

    while(1) {
        current_time = clock();
        double elapsed_time = (double)(current_time - start_time) / CLOCKS_PER_SEC;

        if (elapsed_time >= 1.0) {
            break;
        }
        calculations++;
    }
    printf("Calculations done: %d\n", calculations);
    return 0;
}