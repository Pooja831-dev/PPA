#include<iostream>
using namespace std;

int main()
{
    int arr[5];      //static memory
    
    int *ptr = NULL;

    //step1 : Allocate the memory
     ptr = new int[5];
    //ptr = (int *)malloc(5 * size of(int));

     //step2 : use the memory
     //Logic
   
     //step3 : Deallocate the memory
     delete []ptr;
     //free(ptr);

     return 0;
}