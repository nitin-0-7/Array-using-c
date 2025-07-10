/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5]={2,3,4,1,5};
    for(int i=0;i<5;i++) printf("%p\n",&arr[i]);

    return 0;    //This code prove that an array is stored in contiguous memory allocation
}