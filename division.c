#include <stdio.h>
int main(){
    int a,b;
    float c;
    printf("enter the value of first number :");
    scanf("%d",&a);
    printf("enter the value of the second number :");
    scanf("%d",&b);
    c=(float)a/b;
    if (b == 0){
    printf("division by zero is not allowed");
    }
    else {
        printf("the division of the given value is :%f",c);
    }
    return 0;
}
