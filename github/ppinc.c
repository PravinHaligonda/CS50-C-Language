// Pre-post increment

#include <stdio.h>

void pre_post_increment(void) {

    int num1;
    int num2;

    num1 = 10;
    num2 = num1++;
    printf("Num1: %i and Num2: %i\n", num1, num2);

    num1 = 10;
    num2 = ++num1;
    printf("Num1: %i Num2: %i\n", num1, num2);

}

int main(void) {
    pre_post_increment();
    return 0;
}
