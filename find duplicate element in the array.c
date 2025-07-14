/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[8]={2,3,4,2,3,4,5,6};
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]==arr[j]){
                printf("These are the duplicate element in the array %d ",arr[i]);
            }
        }
}
    return 0;
} 