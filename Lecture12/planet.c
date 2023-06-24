#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc; i++) {                                    // a nested for loop to compare each argument (argv[i]) with the planet names in the planets array
        for (j = 0; j < NUM_PLANETS; j++) {                         // to check if it matches any of the planet names
            if (strcmp(argv[i], planets[j]) == 0) {                 // using the strcmp function to compare the argument with each planet name (planets[j]) and if they match, the condition will be true.
                printf("%s is planet %d\n", argv[i], j + 1);        // if the argument matches a planet name, it prints the argument and the corresponding planet
                break;
            }
        }
        if (j == NUM_PLANETS) {                                     // if no match is found, it is not a planet
            printf("%s is not a planet\n", argv[i]);                // prints that the argument is not a planet.
        }
    }

    return 0;
}
