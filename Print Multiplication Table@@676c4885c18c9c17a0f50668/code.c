// Your code here...
#include <stdio.h>
int main(){
    int x;
    scanf("%x",&x);
    for (int y=1; y<=10;y++){
        printf("%d x %d = %d\n",x,y,x*y);
    }
}