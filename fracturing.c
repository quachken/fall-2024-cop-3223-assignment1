//********************************************************
// fracturing.c
// Author: Ken Quach
// Date: 9/8/24
// Class: COP 3223, Professor Parra
// Purpose: This program uses multiple functions to get calculate different information
// The main purpose of the assignment is to get used to breaking stuff up.
// Input: user will input coordinates for the points
// Output: Calculations for distance, perimeter, area, width, and height from the points
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Declare function to calculate distance
double calculateDistance() {

    // Declare the variables as doubles
    double x1, y1, x2, y2, distance;

    // Prompt user to input points
    printf("Enter the first point (x1, y2): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate distance with math functions
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print out the 3 outputs with the correct information
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Declare a function that calculates perimeter
double calculatePerimeter() {

    // use the pervious calculateDistance function to avoid repetition 
    double distance = calculateDistance();

    // declare perimeter as a double and use pi to calculate the formula
    double perimeter = 2 * PI * (distance/2);

    // print out the correct information
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 2.5;
}

// Declare a function that calculates area
double calculateArea() {

    // use calculateDistance function for DRY
    double distance = calculateDistance();

    // formula for area
    double area = PI * pow(distance/2, 2);

    // print out results
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 2.0;
}

// Declares a double function for width
double calculateWidth() {
    // Declares the variables as doubles
    double x1, y1, x2, y2, width;

    // Ask for user's input, just like calculateDistance function
    printf("Enter the first point (x1, y2): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Use fabs for absolute value
    width = fabs(x2 - x1);

    // print out the results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 2.0;
}

// Declares a double function for height
double calculateHeight() {
    // Declare variables as doubles
    double x1, y1, x2, y2, height;

    // prompt user for inputs
    printf("Enter the first point (x1, y2): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // use fabs for calculation
    height = fabs(y2 - y1);

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 2.0;
}

// Call all of the functions in the main function with the two defined arguments
int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}