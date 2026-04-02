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
    // 1. Declare a 2D array (3 rows, 3 columns)
    int matrix[3][3];
    int i, j;

    // 2. Input: Using nested loops to fill the table
    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {       // Outer loop for Rows
        for (j = 0; j < 3; j++) {   // Inner loop for Columns
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Output: Printing the array in a grid format
    printf("\nYour 3x3 Matrix looks like this:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]); // \t adds a tab space for alignment
        }
        printf("\n"); // Moves to the next line after finishing a row
    }

    return 0;
}

