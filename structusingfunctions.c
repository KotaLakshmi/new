#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float percentage;
};
void func(struct student data);
int main()
{
   struct student data;
   data.id=439;
   strcpy(data.name,"prasanna");
   data.percentage=81.0;
   func(data);
   return 0;
}
void func(struct student data)
{
   printf("id:%d\n",data.id);
   printf("name:%s\n",data.name);
   printf("percentage:%f\n",data.percentage);

}
