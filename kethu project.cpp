#include<stdio.h>
struct student{
    char name[30];
    int rollno;
    int marks[5];
    int total;
};
int main(){
    printf("======================================\n");
    printf("       STUDENTS RANKING SYSTEM         \n");
    printf("======================================\n");
    int size,i,j;
    printf("enter the number of student:");
    scanf("%d",&size);
    struct student s[size];
    for(i=0;i<size;i++){
        s[i].total=0;
        printf("enter student %d name:",i+1);
        scanf("%[^\n]s",s[i].name);
        printf("enter roll no:");
        scanf("%d",s[i].rollno);
        printf("enter the subject marks:");
        for(j=o;j<5;j++){
            scanf("%d",&s[i].marks[j]);
            s[i].total+=s[i].marks[j];
        }
    }
    for(i=o;i<size-1;i++){
        for(j=o;j<size;j++){
            if(s[i].total<s[j].total){
                 int temp=s[i].total;
                 s[i].total=s[j].total;
                 s[j].total=temp;
                }
            }
        }
        printf("\n rank\t roll no\t name\t\t total\n");
        printf("============================================"\n);
        for(i=0;i<size;i++){
            printf("%d\t %d\t-5s\t%d\n",i+1,s[i],rollno,s[i].name,s[i].total);
        }
         
    
