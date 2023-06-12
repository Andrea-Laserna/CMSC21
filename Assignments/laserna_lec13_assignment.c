#include <stdio.h>
#include <math.h>

//Structure definition for line and point
struct line {
    struct point {
        float x;
        float y;
    } point1, point2;
    // Pointer midpoint for storing the mmidpoint coordinates
    float *midpoint;
    float slope;
    float distance;
};

// Function declarations
float solveSlope(struct line line1);
float solveMidpoint(struct line line1, float midpoint[2]);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1, float *slope, float *yIntercept);

int main() {
    // Create a line object
    struct line line1;

    // Get user input for point1
    printf("Enter x and y for point1: \n");
    // Storing input for x1 and y1
    scanf("%f %f", &line1.point1.x, &line1.point1.y);

    // Get user input for point2
    printf("Enter x and y for point2: \n");
    // Storing input for x2 and y2
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    // Calculate and print the slope of the line
    printf("Slope: %f\n", solveSlope(line1));

    // Calculate the midpoint of the line and print its coordinates
    // Storing the 2 coordinates of the midpoint
    float midpoint[2];
    solveMidpoint(line1, midpoint);
    printf("Midpoint: %f, %f\n", midpoint[0], midpoint[1]);

    // Calculate and print the distance between the two points
    printf("Distance between 2 points: %f\n", solveDistance(line1));

    // Calculate the slope-intercept form of the line and print the equation
    float slope = solveSlope(line1);
    float yIntercept;
    getSlopeInterceptForm(line1, &slope, &yIntercept);
    printf("y = %fx + %f\n", slope, yIntercept);

    return 0;
}

// Function to calculate the slope of the line: (y2-y1)/(x2-x1)
float solveSlope(struct line line1) {
    float mY = line1.point2.y - line1.point1.y;
    float mX = line1.point2.x - line1.point1.x;
    return mY / mX;
}

// Function to calculate the midpoint of the line: x coordinate=midpoint[0], y-coordinate=midpoint[1]
float solveMidpoint(struct line line1, float midpoint[2]) {
    midpoint[0] = (line1.point1.x + line1.point2.x) / 2;
    midpoint[1] = (line1.point1.y + line1.point2.y) / 2;
}

// Function to calculate the distance between the two points: sqrt((x2-x1)^2+(y2-y1)^2)
float solveDistance(struct line line1) {
    float dX = line1.point2.x - line1.point1.x;
    float dY = line1.point2.y - line1.point1.y;
    return sqrt((dX * dX) + (dY * dY));
}

// Function to calculate the slope-intercept form of the line: y=mx+b
void getSlopeInterceptForm(struct line line1, float *slope, float *yIntercept) {
    *slope = solveSlope(line1);
    //b=y1-mx1
    *yIntercept = line1.point1.y - ((*slope) * line1.point1.x);
}
