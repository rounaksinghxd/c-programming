// Two Dimensional array:
/*
In C programming, a two-dimensional (2D) array is essentially an array of arrays. 
It allows you to store data in a structured, tabular format consisting of rows and columns, similar to a spreadsheet or a mathematical matrix. 


Commonly used to represent tables, grids, or matrices. It consists of rows and columns.

Declaration: int matrix[3][3]; (3 rows and 3 columns)

Visualizing: Think of it as an array of arrays.

Accessing: matrix[row][column]
*/

//Example of an 2D-array in C:
#include <stdio.h>

int main() {
    // [2 Classes] [3 Students] [2 Subjects]
    int school[2][3][2] = {
        { // Class 1
            {85, 90}, {78, 82}, {92, 88}
        },
        { // Class 2
            {70, 75}, {88, 84}, {95, 91}
        }
    };

    // Access specific element (Class 2, Student 1, Subject 2)
    printf("Class 2, Student 1, Subject 2: %d\n", school[1][0][1]); // Output: 75

    // Printing all elements using three nested loops
    for (int i = 0; i < 2; i++) {
        printf("Class %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", school[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}


