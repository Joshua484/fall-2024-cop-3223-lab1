// Lab 1: Basic Input/Output Operations in C
// Objective: To collect user's age, height, and grade, then display the information back to the user.

#include <stdio.h> // This is needed to use printf and scanf functions

int main() {
    // Declaring variables to store the user's age, height, and grade
    int age;            // Integer variable for age
    float height;       // Floating-point variable for height
    char grade;         // Character variable for grade

    // Asking the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);  // %d is the format specifier for integers

    // Asking the user for their height
    printf("Enter your height: ");
    scanf("%f", &height);  // %f is the format specifier for floats

    // Asking the user for their grade
    printf("Enter your grade: ");
    scanf(" %c", &grade);  // %c is the format specifier for characters
    // Note: The space before %c helps to avoid any issues with leftover newline characters in the input buffer.

    // Displaying the entered values back to the user
    printf("You entered - Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);

    // The program ends here
    return 0; // This indicates that the program finished successfully 
}
