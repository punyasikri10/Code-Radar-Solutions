// Your code here...
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

// Function to rotate the array from k-th position
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    
    // Step 1: Reverse the first part (0 to k-1)
    reverse(arr, 0, k - 1);
    
    // Step 2: Reverse the second part (k to n-1)
    reverse(arr, k, n - 1);
    
    // Step 3: Reverse the entire array (0 to n-1)
    reverse(arr, 0, n - 1);
}

int main() {
    int n, k, i;
    
    // Taking input for the number of elements
    
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
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Printing the rotated array
    // printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
