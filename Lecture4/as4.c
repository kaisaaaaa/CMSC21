#include <stdio.h>

int main() {
    int n, i, first_power = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);                            // ask the user to input the value of n
    printf("\nTABLE OF POWERS OF TWO\n");
    printf(" n   2 to the n\n");
    printf("--- -------------\n");

    for (i = 0; i <= n; i++) {
        printf("%d\t%d\n", i, first_power);     // printing the result
        first_power *= 2;                       // calculate 
    }
    return 0;
}
