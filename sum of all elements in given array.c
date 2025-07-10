/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int arr[5]={2,4,5,1,8};
   int sum=0;
   for(int i=0;i<=4;i++){
       sum+=arr[i];
   }
   printf("%d ",sum);
    

    return 0;
}