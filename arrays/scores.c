#include <stdio.h>
#include <cs50.h>

/*
// Version: 1
// Problem: variables (Tedious to write)
int main(void)
{
    int scores1 = 73;
    int scores2 = 78;
    int scores3 = 35;

    printf("Average: %.5f\n", (scores1 + scores2 + scores3) / 3.0);
}
*/


/*
// Version: 2
// Problem: Add to new feature. (take input from user)
int main(void)
{
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}
*/

int main(void)
{
    int scores[3];

    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    printf("Average: %.4f\n", (scores[0] + scores[1] + scores[2]) / 3.0);

}