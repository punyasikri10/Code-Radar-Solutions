// Your code here...
#include <stdio.h>
int main(){
    char a[100];
    scanf("%s",&a);
    if (a=="R"){
        printf("Stop");
    }
    else if (a=="G"){
        printf("Go");
    }
    else if (a=="V"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}