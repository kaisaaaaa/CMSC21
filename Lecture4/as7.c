#include <stdio.h>

#define ROW 9
#define COLUMN 9

int main(void) {
    int location_input, current_point;
    char labels[ROW] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
    
    int road_networks[ROW][COLUMN] = {{1, 1, 0, 0, 0, 1, 0, 0, 0},
                                      {1, 1, 1, 0, 0, 0, 0, 0, 0},
                                      {0, 1, 1, 0, 1, 1, 0, 0, 1},
                                      {0, 0, 0, 1, 1, 0, 0, 0, 0},
                                      {0, 0, 0, 1, 1, 0, 0, 0, 0},
                                      {1, 0, 1, 0, 0, 1, 0, 0, 0},
                                      {1, 0, 0, 1, 0, 0, 1, 0, 0},
                                      {0, 0, 0, 0, 0, 0, 0, 1, 1},
                                      {0, 0, 0, 0, 0, 0, 0, 1, 1}};

    int row, column;                                                        // printing the matrix
    printf("       A    B   [C]  [D]   E    F    G    H    I\n");
    for (row = 0; row < ROW; row++) {
        if (row == 2 || row == 3) {
            printf("[%c]", labels[row]);
        } else {
            printf("%c  ", labels[row]);
        }
        for (column = 0; column < COLUMN; column++) {
            printf("%5d", road_networks[row][column]);
        }
        printf("\n");
    }

    printf("\nWhich point are you located? 0 - A, 1- B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &location_input);

     switch (location_input){
        case 0:
            printf("At point: A");
            printf("\nPoint: C arrived to charging station");
            break;
        case 1: 
            printf("At point: B");
            printf("\nPoint: C arrived to charging station");
            break;
        case 2:
            printf("\nPoint: C is a charging station");
            break;
        case 3:
            printf("\nPoint: D is a charging station");
            break;
        case 4: 
            printf("At point: E");
            printf("\nPoint: D arrived to charging station");
            break;
        case 5: 
            printf("At point: F");
            printf("\nPoint: D arrived to charging station");
            break;
        case 6: 
            printf("At point: G");
            printf("\nPoint: D arrived to charging station");
            break;
        case 7:
            printf("\nPoint: There is no nearest charging station");
            break;
        default:
            printf("\nInvalid location input");
            break;
        }

    return 0;
}
