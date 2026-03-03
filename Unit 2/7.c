Add Two Complex Numbers by Passing Structure to a Function.

#include<stdio.h>

struct complex{
    int x;
    int y;
}a,b;

void comp(struct complex a,struct complex b);   //Declaration Function

void main(){
    printf("Enter the value of 1st x:");
    scanf("%d",&a.x);
    printf("Enter the value of 2nd x:");
    scanf("%d",&b.x);
    printf("Enter the value of 1st y:");
    scanf("%d",&a.y);
    printf("Enter the value of 2nd x:");
    scanf("%d",&b.y);
    comp(a,b);  // Function Calling
}

void comp(struct complex a,struct complex b)  // Function Definition
{
    struct complex c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    printf("\n The value of First is %d + %d",a.x,b.x);
    printf("\n The value of Second is %d + %d",a.y,b.y);
    printf("\n Addition of both this value is %d and %d",c.x,c.y);

}

