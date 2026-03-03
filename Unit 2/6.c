// Write a function to print data of all students who joined in 2019 without UDF function

#include<stdio.h>

struct str{
    int Roll_no;
    char Name[15];
    char Department[15];
    int Year_of_joining;
    int score;
}arr[10];

void main(){
    int i,n;
    printf("Total students");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter the Details of student %d \n",i+1);
        printf("Roll_no:");
        scanf("%d",&arr[i].Roll_no);
        printf("Name:");
        scanf("%s",&arr[i].Name);
        printf("Department:");
        scanf("%s",&arr[i].Department);
        printf("Year_of_joining:");
        scanf("%d",&arr[i].Year_of_joining);
        printf("Score:");
        scanf("%d",&arr[i].score);
    }
    printf("\n Details of student who has Joined in 2019 \n");
    for(i=0;i<n;i++){
        if(arr[i].Year_of_joining==2019){
            printf("\n Student %d",i+1);
            printf("\n Roll_no:%d",arr[i].Roll_no);
            printf("\n Name:%s",arr[i].Name);
            printf("\n Department:%s",arr[i].Department);
            printf("\n Year_of_joining:%d",arr[i].Year_of_joining);
            printf("\n Score:%d",arr[i].score);
        }
    }
}

// Write a function to print data of all students who joined in 2019 with UDF function

#include<stdio.h>

struct str{
    int Roll_no;
    char Name[15];
    char Department[15];
    int Year_of_joining;
    int score;
}arr[10];

void display(struct str arr[10]);

void main(){
    int i;
    for(i=0;i<3;i++){
        printf("\n Enter the Details of student %d \n",i+1);
        printf("Roll_no:");
        scanf("%d",&arr[i].Roll_no);
        printf("Name:");
        scanf("%s",&arr[i].Name);
        printf("Department:");
        scanf("%s",&arr[i].Department);
        printf("Year_of_joining:");
        scanf("%d",&arr[i].Year_of_joining);
        printf("Score:");
        scanf("%d",&arr[i].score);
    }
    printf("\n Details of student who has Joined in 2019 \n");
    display(arr);
}

void display(struct str arr[10]){
    int i;
    for(i=0;i<3;i++){
        if(arr[i].Year_of_joining==2019){
            printf("\n Student %d",i+1);
            printf("\n Roll_no:%d",arr[i].Roll_no);
            printf("\n Name:%s",arr[i].Name);
            printf("\n Department:%s",arr[i].Department);
            printf("\n Year_of_joining:%d",arr[i].Year_of_joining);
            printf("\n Score:%d",arr[i].score);
        }
    }
}
