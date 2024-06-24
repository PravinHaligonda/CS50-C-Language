#include <stdio.h>

int arr[5];

int main(void) {

    // int = 4 bytes
    // prints 20 because 4 bytes * 5 of them = 20 bytes
    printf("Size of arr: %lu\n", sizeof(arr));

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }


}
