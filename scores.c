#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Address of score1: %p\n", &score1);
    printf("Average: %f\n", (score1 + score2 + score3) / (float) 3);

}