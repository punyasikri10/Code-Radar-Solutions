// Your code here...
#include <stdio.h>
int main(){
    int num,i;
    scanf("&d",&num);
    if (num<2){
        printf("Not Prime\n");
        return 0;
    }
    for (i=2; i*i<=num;i++){
        if (num%i==0){
            printf("Not Prime\n");
            return 0;
        }
    }
    printf("Prime\n");
    return 0;
}