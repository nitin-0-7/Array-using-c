/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}


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
    printf("your reversed value are :-");
    reverse(arr,n);
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}