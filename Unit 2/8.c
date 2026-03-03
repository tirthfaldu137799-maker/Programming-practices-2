Demonstrate difference between structure and union.

#include<stdio.h>

struct student1{
    int x;
    int y;
}s1;

union student2{
    int x;
    int y;
}s2;

void main(){

    s1.x=6;
    s1.y=8;

    s2.x=6;
    s2.y=8;

    printf("\n Structure x=%d y=%d",s1.x,s1.y);
    printf("\n Union x=%d y=%d",s2.x,s2.y);
}

