// Averages three numbers using arrays, constants and helper function.

#include <cs50.h>
#include <stdio.h>

// Constants
const int N = 3;


int main(void)
{
    // Get Scores
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }
    // Print result
    printf("Average: %f\n", );
}

float average(int length, int array[])
{

    sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i]
    }
    return sum / (float) length
}