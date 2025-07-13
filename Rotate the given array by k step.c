/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reverse(int arr[],int n,int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
}

int main()
{
    int n;
    printf("Enter size of an array ");
    scanf("%d",&n);
    int arr[n];
    int k=50;
    k=k%n;
    for(int i=0;i<=n-1;i++){
        printf("Enter element no %d ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n,0,n-1);
    reverse(arr,n,0,k-1);
    reverse(arr,n,k,n-1);
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}