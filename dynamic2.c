#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
  
    //step1 :Allocate the memory
     ptr = (int *)malloc(5 * sizeof(int));

     //step2 :Use the memory
     //Logic

     //step3 :Deallocate the memory
      free(ptr);
  
      return 0;
}
