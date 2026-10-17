#include <stdio.h>

int main() {
    int row, col;
    int cols = 13;                         

    for (row = 0; row < 3; row++) 
    {
        for (col = 0; col < cols; col++)
         {
            if ((row == 0 && col % 4 == 0) ||(row == 1 && col % 2 == 1) || (row == 2 && col % 4 == 2))       
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
