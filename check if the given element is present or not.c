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
    int k=50;
    
    for(int i=0;i<=n-1;i++){
        printf("Enter element no %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
     if(arr[i]==k){
           printf("\n");
           printf("%d is present in an array at its index is %d\n",k,i);
           for(int i=0;i<=n-1;i++){
           printf("%d ",arr[i]);}
           break;
    }
        

       
       
    }
    
    return 0;
}