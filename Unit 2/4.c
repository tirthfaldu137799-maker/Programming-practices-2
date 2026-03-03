Sort above data by score in descending order.

 #include<stdio.h>

struct str{
    int Roll_no;
    char Name[15];
    char Department[15];
    int Year_of_joining;
    int score;
}arr[10],temp;

void main(){
    int count=1,i,n;
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
    for(i=0;i<n;i++){
  for (j = 0; j < n - i - 1; j++) {
        if(arr[i].score<arr[i+1].score){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
	}
    }
        printf("\n Details of student sorted by score \n");
    for(i=0;i<n;i++){
        printf("\n Student %d",i+1);
        printf("\n Roll_no:%d",arr[i].Roll_no);
        printf("\n Name:%s",arr[i].Name);
        printf("\n Department:%s",arr[i].Department);
        printf("\n Year_of_joining:%d",arr[i].Year_of_joining);
        printf("\n Score:%d",arr[i].score);
    }
}


