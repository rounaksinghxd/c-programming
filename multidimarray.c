// Multidimensional Array in C Programming:
/*
An array of 2D arrays, visualized as a cube or a stack of tables.

C allows arrays of three or more dimensions. A 3D array can be visualized as a cube or a "book of matrices."

Declaration: int cube[2][3][3];

Use Case: Often used in 3D graphics, physics simulations, or complex data sets.
*/

//Example of multidimensional array:
#include <stdio.h>

int main() {
    // 3D Array: 2 layers, 2 rows, 2 columns
    int arr[2][2][2] = {
        { {1, 2}, {3, 4} }, // Layer 0
        { {5, 6}, {7, 8} }  // Layer 1
    };

    // Accessing all elements requires 3 nested loops
    for (int i = 0; i < 2; i++) {       // Layer
        for (int j = 0; j < 2; j++) {   // Row
            for (int k = 0; k < 2; k++) { // Column
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
    return 0;
}
