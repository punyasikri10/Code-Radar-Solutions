#include <stdio.h>
int main() {
    int a, b, c;
    char op;
    int valid = 1; 
    scanf("%d %d", &a, &b);
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            if (b != 0) {
                c = a / b;
            } else {
                printf("error\n"); 
                valid = 0; 
            }
            break;
        default:
            printf("error\n");
            valid = 0; 
            break;
    }
    if (valid) {
        printf("%d\n", c);
    }
    return 0;
}