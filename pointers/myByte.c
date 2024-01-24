#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(void)
{
    BYTE myByte = 30;

    printf("Value of my variable MyByte: %u\n", myByte);
    printf("Value of my variable MyByte in Hexadecimal: %02X\n", myByte);
}