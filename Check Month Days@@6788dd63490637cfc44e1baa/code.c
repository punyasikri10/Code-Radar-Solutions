#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    switch(x){
        case 1: 
        printf("31");
        break;
        case 2:
        printf("28");
        break;
        case 3: 
        printf("31");
        break;
        case 4:
        printf("30");
        break;
        case 5:
        printf("31");
        case 12:
        printf("31");
        break;
        default:
        printf("Invalid month");
    }
}