/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter size of an array ");
    scanf("%d",&n);
    int arr[n];
    int k=43;
    int idx=0;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        printf("Enter element no %d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
     if(arr[i]==k){
         flag=true;
         idx=i;  //store i value
           break;
    }
        }
        if(flag==false){
            printf("%d is not present in an array",k);
        }
        else{
            printf("%d is present in the array and its index are %d ",k,idx);
        }
        
    return 0;
}