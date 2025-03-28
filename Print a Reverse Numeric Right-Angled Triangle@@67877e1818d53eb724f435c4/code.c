// Your code here...
#include <stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=n; j<=i; j--){
            printf("%c ",'1'+j-1);

        }
        printf("\n");
    }
    return 0;
}