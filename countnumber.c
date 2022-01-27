#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE* fptr;
  int i,n,wrd=1,character=1;
  char str[100],ch,fname[20]="test2.txt";
  printf("enter the number of lines to be written:");//3
  scanf("%d",&n);
  printf("the lines are:\n");//the file name1,the file name2,the file name3
  fptr=fopen(fname,"w");
  for(i=0;i<n+1;i++)
  {
     fgets(str,sizeof str,stdin);
     fputs(str,fptr);
  }
  fclose(fptr);
  fptr=fopen(fname,"r");
  if(fptr==NULL)
  {
     printf("file cannot be opend");
  }
  else{
      ch=fgetc(fptr);
      printf("the content of file %s is:\n",fname);//the file name1,the file name2,the file name3
      while(ch!=EOF)
      {
          printf("%c",ch);
          if(ch==' '||ch=='\n')
          {
              wrd++;
          }
          else{
              character++;
          }
          ch=fgetc(fptr);
       }
       printf("\n the number of words in the file %s are:%d\n",fname,wrd-2);
       printf("the number of characters in the file %s are:%d\n",fname,character-1);
    }
  fclose(fptr);
  return 0;
}
