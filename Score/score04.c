#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int N = 3;
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}

// Problem:
/*

Hard coded values

*/

// Solution:
/*

Use the variable to place

*/