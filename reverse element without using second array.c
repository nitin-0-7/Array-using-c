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
    for(int k=0;k<=n-1;k++){
        printf("Enter element no %d ",k+1);
        scanf("%d",&arr[k]);
    }
    
    printf("These are reverse result of array :- ");
    for(int i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
    }
    
    return 0;
}