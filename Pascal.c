#include <stdio.h>

int main() {
    int n,value;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++)
     {
        for (k = 1; k <= 2 * (n - 1 - i); k++)   
            printf(" ");

        value = 1;   

        for (j = 0; j <= i; j++) {
            printf("%4d", value);    
                       
            value = value * (i - j) / (j + 1);   
        }
        printf("\n");
    }
    return 0;
}
