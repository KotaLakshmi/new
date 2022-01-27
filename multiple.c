#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE* fptr;
  int i,n;
  char str[100],fname[20]="test.txt";
  char str1;
  printf("enter the number of lines to be written:");//5
  scanf("%d",&n);
  printf("the lines are:\n");// the file name1,the file name2,the file name3
  fptr=fopen(fname,"w");
  for(i=0;i<n+1;i++)
  {
     fgets(str,sizeof str,stdin);
     fputs(str,fptr);
  }
  fclose(fptr);
  fptr=fopen(fname,"r");
  printf("the content of file %s is:\n",fname);//the file name1,the file name2,the file name3
  str1=fgetc(fptr);
  while(str1!=EOF)
  {
      printf("%c",str1);
      str1=fgetc(fptr);
  }
  printf("\n\n");
  fclose(fptr);
  return 0;
}
