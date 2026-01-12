#include <stdio.h>

int main() {
    int n, i, j, key;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int A[n]; // Declare array of size n

    // Step 2: Input elements from user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Step 3: Start Insertion Sort
    for(j = 1; j < n; j++) {
        key = A[j];     // Take the current element
        i = j - 1;      // Start comparing with elements on the left

        // Step 4: Shift elements greater than key to the right
        while(i >= 0 && A[i] > key) {
            A[i + 1] = A[i]; // Move element one step to the right
            i=i-1;             // Move left
        }

        // Step 5: Place key at correct position
        A[i + 1] = key;
    }

    // Step 6: Print sorted array
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

//Output:
//Input:
Enter number of elements in array: 6
Enter 6 elements:
40 20 10 50 30 60

//Output:
Sorted array in ascending order:
10 20 30 40 50 60


