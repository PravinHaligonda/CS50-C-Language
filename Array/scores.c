#include <cs50.h>
#include <stdio.h>

int main(void) {

    const int N = 3;
    int score[N];
    score[0] = 72;
    score[1] = 73;
    score[2] = 33;

    // Take average
    printf("%f\n", (score[0] + score[1] + score[2]) / 3.0);
}
