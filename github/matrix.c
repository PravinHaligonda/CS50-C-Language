#include <stdio.h>

int grid[3][4] = {
    {2, 3, 4, 5},
    {6, 7, 8, 9},
    {10, 11, 12, 13}
};

int main(void) {
    int row;
    int column;

    for (row = 0; row < 3; row++) {
        printf("--- row %i ---", row);
        for (column = 0; column < 4; column++) {
            printf("column[%i], value=%i\n", column, grid[row][column]);
        }
    }
    return 0;
}
