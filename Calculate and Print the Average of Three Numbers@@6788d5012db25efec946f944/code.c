#include <stdio.h>

int main() {
    int a,b,c,sum;
    float av;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    av=float(sum)/3;
    printf("Average: %.2f",av);
    return 0;
}