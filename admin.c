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
   struct Staff
   {
      char ECEstaffname[200];
      char CSEstaffname[200];
   };
   struct Nonstaff
   {
       char officestaff[200];
       char officename[200];
       char accountstaff[20];

   };
   struct Admin
   {
       struct Student std[3];
       struct Staff std1[3];
       struct Nonstaff std2[3];
   };
   //storing information
   struct Admin a;
   for(int i=0;i<3;i++){
       printf("Enter The Student details:\n",i+1);
       printf("Enter name:");
       gets(a.std[i].name);
       printf("Enter ID:");
       gets(a.std[i].ID);
       printf("Enter The Staff details:\n",i+1);
       printf("Enter ECEstaffname:");
       gets(a.std1[i].ECEstaffname);
       printf("Enter The Nonstaff details:\n",i+1);
       printf("Enter officename:");
       gets(a.std2[i].officename);
   }
   //displaying result
   for(int i=0;i<3;i++){
        printf("nmae:%s\n",a.std[i].name);
        printf("ID:%d\n",a.std[i].ID);
        printf("ECEstaffnmae:%s\n",a.std1[i].ECEstaffname);
        printf("officenmae:%s\n",a.std2[i].officename);
   }
   return 0;
}
