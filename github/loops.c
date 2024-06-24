#include <stdio.h>

int arr[5];

int main(void) {

    for (int i = 0; i < sizeof(arr); i++) {
        arr[i] = i + 1;
    }
    printf(arr[]);


}
