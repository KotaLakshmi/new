#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fptr,*fptr1;
    char ch;
    int n=0,cnt=0;
    printf("enter the margin value:");
    scanf("%d",&cnt);
    fptr=fopen("anu.txt","r");
    fptr1=fopen("anu1.txt","w");
    while((ch=fgetc(fptr))!=EOF){
        fputc(ch,fptr1);
        if(ch=='\n'){
            n=0;
        }
        n++;
        if(n==cnt){
            while((ch=fgetc(fptr))!=' '&&ch!='\n'&&ch!='\t'&&ch!='\0'){
                fputc(ch,fptr1);
            }
            if(ch==' '||ch=='\n'){
                fputc('\n',fptr1);
                n=0;
            }
        }
    }
    fclose(fptr);
    fclose(fptr1);
    int characters=0, words=0, lines=0;
    fptr1 = fopen("anu1.txt", "r");
    if (fptr1 == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }
    while ((ch = fgetc(fptr1)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t')
            words++;
    }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fptr1);
}
