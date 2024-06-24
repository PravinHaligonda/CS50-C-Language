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
    // Value of num1 is incremented by 1 and then assigned to 

}

int main(void) {
    pre_post_increment();
    return 0;
}
