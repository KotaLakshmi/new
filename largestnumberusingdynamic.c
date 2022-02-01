#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n,i,large=0,ele;
// Get the number of elements for the array
    printf("enter the number  of  elements in  array:");
    scanf("%d",&n);
   // printf("Enter number of elements: %d\n", n);
	// Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));


	// Check if the memory has been successfully
    // allocated by calloc or not
   if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");

	// Get the elements of the array
		//for (i = 0; i < n; ++i) {
		//ptr[i] = i + 1;
	    //}
		// Print the elements of the array
		//printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
		      printf("enter the number %d:", i+1);
		      scanf("%d",ptr+i);
	    }
	    for(i=0;i<n;i++){
           // scanf("%d",&ptr[i]);
            if(*ptr<*(ptr+i)){
                *ptr=*(ptr+i);
            }
	    }
	    printf(" the largest number :%d",*ptr);
	    free(ptr);
   }

return 0;
}

