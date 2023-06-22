#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int occurrences[26]) {
    char c;
    while ((c = getchar()) != '\n') {                               // read characters until a new line
        if (isdigit(c)) {                                           // to check if the input is a digit
            printf("You have entered a number. Please enter a word.\n");
            while ((c = getchar()) != '\n') {                       // read and discard the remaining characters until a new line
            }
            return scan_word(occurrences);                          // ask for input again
        } else if (isalpha(c)) {                                    // check if it is a letter
            occurrences[toupper(c) - 'A']++;                        // increment the count for the corresponding letter
        }
    }
}

bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    for (int i = 0; i < 26; i++) {
        if (occurrences1[i] != occurrences2[i]) {                   // compare
            return false;                                           // not equal means not an anagram
        }
    }
    return true;                                                    // match means anagram
}

int main(void) {
    int occurrences1[26] = {0};                                     // initialize array at 0
    int occurrences2[26] = {0};                                     // initialize array at 0

    printf("Enter first word: ");
    scan_word(occurrences1);                                        

    printf("Enter second word: ");
    scan_word(occurrences2); 

    if (is_anagram(occurrences1, occurrences2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}
