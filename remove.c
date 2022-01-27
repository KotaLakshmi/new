#include <stdio.h>

void main()
{
	int i;
	char fname[20];
	printf(" Input the name of file to delete : ");//test3.txt
	scanf("%s",fname);
	i=remove(fname);
	if(i==0)
	{
		printf(" The file %s is deleted successfully..!!\n\n",fname);
	}
	else
	{
		printf(" Unable to delete file %s\n\n",fname);
    }
}
