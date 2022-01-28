#include<stdio.h>
int main()
{
   struct Employeedetails
   {
       char empname[200];
       char empID[20];
       char empsalary[200];

       struct
       {
          char depname[200];
          char depID[20];
          struct
          {
             char divname[200];
             char divtype[200];
          }Departmentdivision;
       }Departmentdetails;
   };
   struct Employeedetails std;
   printf("Employeedetails are:\n");
   printf("Enter empname:");
   gets(std.empname);
   printf("Enter empID:");
   gets(std.empID);
   printf("Enter empsalary:");
   gets(std.empsalary);
   printf("Department details are:\n");
   printf("Enter depname:");
   gets(std.Departmentdetails.depname);
   printf("Enter depID:");
   gets(std.Departmentdetails.depID);
   printf("Department division are:\n");
   printf("Enter divname:");
   gets(std.Departmentdivision.divname);
   printf("Enter divtype:");
   gets(std.Departmentdivision.divtype);
   //Displaying details
   printf("\nEmployee details:\n");
   printf("empname:%s\n",std.empname);
   printf("empID:%s\n",std.empID);
   printf("empsalary:%s\n",std.empsalary);
   printf("\nDepartment Details:\n");
   printf("depname:%s\n",std.Departmentdetails.depname);
   printf("depID:%s\n",std.Departmentdetails.depID);
   printf("\nDepartment Division Details:\n");
   printf("divname:%s\n",std.Departmentdivision.divname);
   printf("divtype:%s\n",std.Departmentdivision.divtype);
   return 0;
}
