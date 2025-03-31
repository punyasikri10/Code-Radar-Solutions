#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    
    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k, i;
    
    // Taking input for the number of elements
    // printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking input for array elements
    // printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Taking input for rotation position
    // printf("Enter the rotation position (k): ");
    scanf("%d", &k);
    
    // Rotate the array to the right
    rotateRight(arr, n, k);
    
    // Printing the rotated array
    // printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
