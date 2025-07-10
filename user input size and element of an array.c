/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of an array ");
    scanf("%d",&n);
    int arr[n];
   for(int i=0;i<=n-1;i++){
       printf("Enter element number %d ",i+1);
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<=n-1;i++){
      printf(" your array contain %d\n",arr[i]);
   }
    return 0;
}