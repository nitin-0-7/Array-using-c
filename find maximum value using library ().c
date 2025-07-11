/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[9]={18,45,65,23,45,13,11,3,16};
    int max=INT_MIN;
    for(int i=1;i<=8;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The maximum value of an array is %d ",max);
    return 0;
}