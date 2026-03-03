Write a program that compares two given dates. To store a date use
a structure that contains three members namely date, month and
year. If the dates are equal then display message “equal” otherwise
“not equal”.

#include<stdio.h>

struct day{
    int date;
    int month;
    int year;
}d1,d2;

void main(){
    printf("Enter Date for d1:");
        scanf("%d",&d1.date);
        printf("Enter Date for d2:");
        scanf("%d",&d2.date);
        printf("Enter month for d1:");
        scanf("%d",&d1.month);
        printf("Enter the month for d2:");
        scanf("%d",&d2.month);
        printf("Enter the year for d1:");
        scanf("%d",&d1.year);
        printf("Enter the year for d2:");
        scanf("%d",&d2.year);

        if(d1.date==d2.date && d1.month==d2.month && d1.year==d2.year){
            printf("\n Enter Days are equal");
        }
        else{
            printf("\n Enter Days are not equal");
        }
}

