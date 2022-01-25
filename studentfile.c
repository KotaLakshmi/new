#include<stdio.h>
#include<stdlib.h>
struct student
{
   int studentid,studentage;
   char studentName[50],studentcourse[50];
};
int main()
{
    int i;
    struct student data;
    FILE *fptr;
    fptr=fopen("student.txt","w");
    if(fptr==NULL)
    {
    printf("error! opening file");
    exit(1);
    }
    for(i=0;i<1;i++)
    {
    printf("enter studentid:");
    scanf("%d",&data.studentid);
    printf("enter studentName:");
    scanf("%s",data.studentName);
    printf("enter studentage:");
    scanf("%d",&data.studentage);
    printf("enter studentcourse:");
    scanf("%s",data.studentcourse);
    fwrite(&data,sizeof(struct student),1,fptr);
    }
fclose(fptr);
return 0;

}
