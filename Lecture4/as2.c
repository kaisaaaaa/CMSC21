#include <stdio.h>

int main(){
    int x = 5;

    printf("FOR LOOP:\n");
    for (int i = 0; x < 5; i++){
        printf("Hello World! from For Loop\n");
    }

    printf("\nWHILE LOOP:\n");
    while (x < 5) {
        printf("Hello World! from While Loop\n");
    }

    printf("\nDO-WHILE LOOP:\n");
    do {
        printf("Hello World! from Do-While Loop\n");
    } while (x < 5);

    return 0;
}
