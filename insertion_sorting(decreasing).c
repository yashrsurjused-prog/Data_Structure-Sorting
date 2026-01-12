#include <stdio.h>

int main() {
    int n, i, j, key;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int A[n]; // Array to store numbers

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Step 3: Sort in decreasing order using Insertion Sort
    for(j = 1; j < n; j++) {
        key = A[j];     // Take current number
        i = j - 1;      // Compare with numbers on the left

        // Move all numbers smaller than key one step to the right
        while(i >= 0 && A[i] < key) {
            A[i + 1] = A[i];
            i--;
        }

        // Place key in the correct position
        A[i + 1] = key;
    }

    // Step 4: Print sorted array
    printf("Sorted array in decreasing order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
//iNPUT:
Enter number of elements in the array: 6
Enter 6 elements:
40 20 10 50 30 60

//Output:
Sorted array in decreasing order:
60 50 40 30 20 10
