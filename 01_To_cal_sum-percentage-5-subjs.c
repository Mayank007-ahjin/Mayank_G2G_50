#include <stdio.h>
int main(){
    float a,b,c,d,e,sum;
    float per;
    printf("Enter the marks:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=(sum*100)/500;
    printf("The total marks =%.2f and the percentage =%.2f",sum,per);
    return 0;

}