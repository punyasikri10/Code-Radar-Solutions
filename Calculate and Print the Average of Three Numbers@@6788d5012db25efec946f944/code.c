#include <stdio.h>

int main() {
    int a,b,c;
    float av;
    scanf("%d %d %d",&a,&b,&c);
    av=float(a+b+c)/3;
    printf("Average: %.2f",av);
    return 0;
}