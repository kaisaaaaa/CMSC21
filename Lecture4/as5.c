#include <stdio.h>

int main(void) {
    int days, start_day, i, j;

    do{
        printf("Enter number of days in the month: ");
        scanf("%d", &days);

        if (days < 28 || days > 31){
            printf("Invalid number of days in a month. Please input again.\n");
        }
    } while (days < 28 || days > 31);

    do{
        printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &start_day);

        if (start_day < 1 || start_day > 7){
            printf("Invalid starting day of the week. Please input again.\n");
        }
    } while (start_day < 1 || start_day > 7);

    printf("\n");

    for (i = 1; i < start_day; i++){            // printing the blank days of the first week
        printf("   ");
    }
  
    for (j = 1; j <= days; i++, j++){           // printing the calendar numbers
        printf("%3d", j);
        if (i % 7 == 0){
            printf("\n");
        }
    }

    printf("\n\n");
    return 0;
}
