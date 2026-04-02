// 1 Dimensional Array(1D Array):

/*
In C it is a linear data structure that stores a collection of elements of the same data type in contiguous (sequential) memory locations.
The simplest form, often thought of as a single row or a list.

Declaration: int marks[5];

Initialization: int marks[5] = {90, 85, 70, 95, 80};

Accessing: printf("%d", marks[0]); // Outputs 90
*/

#include <stdio.h>

int main() {
    // Declare and initialize a 1D array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing elements using indices 0 to 4
    printf("First element: %d\n", numbers[0]); // Output: 10
    printf("Third element: %d\n", numbers[2]); // Output: 30

    // Modifying an element
    numbers[4] = 100;
    printf("Modified fifth element: %d\n", numbers[4]); // Output: 100

    return 0;
}
