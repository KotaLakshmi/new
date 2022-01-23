#include <stdio.h>

int main()
{
    int i,k,day,date=1,month;
    printf(" \n enter the total no of days in a month:");
    scanf("%d",&day);
    printf("enter first day start from <0-sun 1-mon 2-tue 3-wed 4-thu 5-fri 6-sat>end with saturday:");
    scanf("%d",&k);
    printf("enter the month name:\n");
    scanf("%s",&month);
    printf("\n sun\tmon\ttue\twed\tthu\tfri\tsat\n\n");
    for(i=k;i>0;i--)
    {
        printf("\t");
    }
    while(date<=day)
    {
        if(k!=0)
        {
            if(k%7==0)
            printf("\n");
        }
        printf("%d\t",date);
        date++;
        k++;
    }
    return 0;
}
