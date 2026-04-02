// Sortation of an Array:
/*
We can sort an array using Bubble sort method.
*/

//Example of sort of an array:
#include <stdio.h>

int main() {
    int n, i, j, temp;

    // 1. Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // 2. Store elements from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Bubble Sort Logic (Ascending Order)
    for (i = 0; i < n - 1; i++) {         // Outer loop for passes
        for (j = 0; j < n - i - 1; j++) { // Inner loop for comparison
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 4. Print the sorted array
    printf("\nArray sorted in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}