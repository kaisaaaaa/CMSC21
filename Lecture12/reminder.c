#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50                       /* maximum number of reminders*/
#define MSG_LEN 60                          /* max length of reminder message*/

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];            // an array to store reminders
    char day_str[3], msg_str[MSG_LEN + 1];              // strings to hold day and reminder message
    int day, i, j, num_remind = 0;                      // to track the number of reminders

    for (;;){
        if (num_remind == MAX_REMIND){                  // to check if the maximum number of reminders has been reached
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0)
            break;

        sprintf(day_str, "%2d", day);                  
        read_line(msg_str, MSG_LEN);                    // to read the reminder message from the user

        for (i = 0; i < num_remind; i++){               // to find the position to insert the reminder based on the day
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        }

        for (j = num_remind; j > i; j--){               // to shift reminders down to make room for the new reminder
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], day_str);                  // to store the day and reminder message
        strcat(reminders[i], msg_str);
        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++){
        printf(" %s\n", reminders[i]);                   // to print each reminder
    }

    return 0;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n'){                   // to read characters from input until a newline
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}
