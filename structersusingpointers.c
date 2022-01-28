#include<stdio.h>
int main()
{
   struct Student
   {
      char name[255];
      int ID[200];
      int marks[200];
      char course[200];
   };
   struct Staff_details
   {
      char staffname[200];
      char staffID[200];
   };
   struct Nonstaff_details
   {
       char officename[200];
       char officeID[20];

   };
   struct Admin
   {
       struct Student std[3];
       struct Staff_details std1[3];
       struct Nonstaff_details std2[3];
   };
   //storing the  information....
   struct Admin a;
   struct Admin a1[2];
   struct Admin *ptr;
   ptr=a1;
   for(int i=0;i<2;i++){
       printf("Enter The Student details:\n",(i+1));
       printf("Enter student name:");
       scanf("%s",ptr->std[i].name);
       printf("Enter ID:");
       scanf("%d",ptr->std[i].ID);
       printf("Enter student marks:");
       scanf("%d",ptr->std[i].marks);
       printf("Enter student course:");
       scanf("%s",ptr->std[i].course);
       printf("Enter The Staff details:\n",(i+1));
       printf("Enter staffname:");
       scanf("%s",ptr->std1[i].staffname);
       printf("Enter staffID:");
       scanf("%s",ptr->std1[i].staffID);
       printf("Enter The Nonstaff details:\n",(i+1));
       printf("Enter officename:");
       scanf("%s",ptr->std2[i].officename);
       printf("Enter officeID:");
       scanf("%s",ptr->std2[i].officeID);
       ptr++;
   }
   ptr=a1;
   printf("\nDisplaying Result is........\n");
   //displaying result
   for(int i=0;i<2;i++){
        printf("name:%s\n",ptr->std[i].name);
        printf("ID:%d\n",ptr->std[i].ID);
        printf("marks:%d\n",ptr->std[i].marks);
        printf("course:%s\n",ptr->std[i].course);
        printf("staffname:%s\n",ptr->std1[i].staffname);
        printf("staffID:%s\n",ptr->std1[i].staffID);
        printf("officename:%s\n",ptr->std2[i].officename);
        printf("officeID:%s\n",ptr->std2[i].officeID);
        ptr++;
        printf("\n");
   }
   return 0;
}
