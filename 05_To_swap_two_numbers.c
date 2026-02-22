//Using three variables:
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: %d %d\n", a, b);
    return 0;
}
//using only two variables:
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers to be swaped:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping a=%d and b=%d",a,b);
    return 0;

}
