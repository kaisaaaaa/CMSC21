#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
};

float solveSlope(struct line line1){                 // to solve for slope
    float slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);    // formula for slope
    return slope;
}

struct point solveMidpoint(struct line line1){       // to solve for midpoint
    struct point midpoint;
    midpoint.x = (line1.point1.x + line1.point2.x) / 2;     // midpoint for x
    midpoint.y = (line1.point1.y + line1.point2.y) / 2;     // midpoint for y
    return midpoint;
}

float solveDistance(struct line line1){                     // distance formula
    float distance = sqrt(pow(line1.point2.x - line1.point1.x, 2) + pow(line1.point2.y - line1.point1.y, 2));
    return distance;
}

void getSlopeInterceptForm(struct line line1){              // slope intercept form
    float slope = solveSlope(line1);
    float intercept = line1.point1.y - (slope * line1.point1.x);
    printf("y = %.2fx + (%.5f)\n", slope, intercept);
}

int main(){
    struct line line1 = {0};                                // initialize line1 to zero
    int choice;

    do{
        printf("\nEnter x and y for point1: ");               // ask user input for point1 coordinates
        scanf("%f %f", &line1.point1.x, &line1.point1.y);

        printf("Enter x and y for point2: ");               // ask user input for point2 coordinates
        scanf("%f %f", &line1.point2.x, &line1.point2.y);

        float slope = solveSlope(line1);                    // calculate slope, midpoint, and distance
        struct point midpoint = solveMidpoint(line1);
        float distance = solveDistance(line1);

        printf("Slope: %.2f\n", slope);                     // to print slope, midpoint, distance, and slope-intercept form
        printf("Midpoint: %.2f %.2f\n", midpoint.x, midpoint.y);
        printf("Distance between 2 points: %.2f\n", distance);
        getSlopeInterceptForm(line1);

        printf("\nPress 1 to terminate the program or any other key to try again: ");       // ask if the user wants to continue or exit
        scanf("%d", &choice);
        printf("\n");

    }while (choice != 1);

    return 0;
}
