// Pre-post increment

#include <stdio.h>

void pre_post_increment(void) {

    int num1;
    int num2;

    num1 = 10; //This is going to change
    num2 = num1++;
    // Value of num1 assigned to num2 then it incremented by 1

    num1 = 10; //both num1 and num2 going to change.
    num2 = ++num1;
    // Value of num1 is incremented by 1 and then assigned to num2

}

int main(void) {
    pre_post_increment();
    return 0;
}
