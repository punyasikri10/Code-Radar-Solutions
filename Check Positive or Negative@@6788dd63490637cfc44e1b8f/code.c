#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("Positive");
    }
    elif (a=0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}