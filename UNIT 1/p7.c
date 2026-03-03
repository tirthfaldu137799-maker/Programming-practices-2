//Merge two arrays.
#include<stdio.h>
int main()
{
    int a[5]={1,2,3}, b[2]={4,5}, c[7], i;
    for(i=0; i<3; i++)
    c[i] = a[i];
    for(i=0; i<2; i++)
    c[i+3] = b[i];
    for(i=0; i<5; i++)
    printf("%d ", c[i]);
    return 0;
}
