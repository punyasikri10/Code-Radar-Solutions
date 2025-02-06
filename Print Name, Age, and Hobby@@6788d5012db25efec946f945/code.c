
#include<stdio.h>
int main(){
    char c[100];
    int age;
    char d[100];
    scanf("%s %d \n",&c ,&age);
    scanf("%s",&d);
    printf("Name: %s\n",c);
    printf("Age: %d \n",age);
    printf("Hobby: %s",d);
    return 0;
}