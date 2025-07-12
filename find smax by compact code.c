/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[9]={1,2,3,4,4,3,2,1,0};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=8;i++){
        if(max<arr[i]){
            smax=max;   //smax is now previous max
            max=arr[i];  // max is now new max 
        }
        else if(smax<arr[i] && max!=arr[i]){
        smax=arr[i];
    }
}

    printf("%d",smax);
    return 0;
}