// Your code here...
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch>='a'&& ch<='z'){
        printf("Lowercase\n");
    }
    else if (ch>='A'&& ch<='Z'){
        printf("Uppercase\n");
    }else{
        printf("Not an alphabet\n");
    }
}