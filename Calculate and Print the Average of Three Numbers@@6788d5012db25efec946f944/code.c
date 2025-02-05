#include <stdio.h>

int main() {
    float a,b,c;
    float av;
    scanf("%f %f %f",&a,&b,&c);
    av=float(a+b+c)/3;
    printf("Average: %.2f",av);
    return 0;
}