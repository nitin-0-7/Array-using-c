/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        //swap arr[i] and arr[j]
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
}

int main(){
    int n;
    printf("Enter size of an array ");
    scanf("%d",&n);
    int arr[n];  //(original array ) taking input from user for size of an array
    int original[n]; //copy to preserve the original array for comparison
    
    for(int i=0;i<=n-1;i++){
         printf("Enter element no %d ",i+1);
    scanf("%d",&arr[i]);  // taking input from user to add element in an array
    original[i]=arr[i];   //copy original
    }
    printf("Your reverse result are given below\n");
    
    reverse(arr,n);

    int is_palindrome=1;  //compare reverse result from original array
    for(int i=0;i<n;i++){
        if(arr[i]!=original[i]){ 
            is_palindrome=0;
            break;
        }
     
    }
    
    for(int i=0;i<=n-1;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
    if(is_palindrome){
        printf("Array is palindrome.");
    }
    else{
        printf("Array is not palindrome.");
    }
    return 0;
}