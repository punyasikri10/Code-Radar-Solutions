#include <stdio.h>
int main() {
    int n;    
    scanf("%d", &n);    
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= n; j++) { // Loop for each column
            printf("* "); // Print an asterisk
        }
        printf("\n"); // Move to the next line after each row
    }    
    return 0; // Indicate successful completion
}