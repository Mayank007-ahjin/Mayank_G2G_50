#include <stdio.h>
#include <math.h>
#define PI 3.141
int main(){
    float r,c,a;
    printf("Enter the Radius:");
    scanf("%f",&r);
    c=2*(PI)*r;
    a=(PI)*r*r;
    printf("The circumference and area of the circle are:%.2f & %.2f respectively",c,a);
    return 0;

}