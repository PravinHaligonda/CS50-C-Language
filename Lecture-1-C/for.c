#include <cs50.h>
#include <stdio.h>

int loop(void);

int main(void) {
    loop();
}

int loop(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            print("#");
        }
        print("\n");
    }
}