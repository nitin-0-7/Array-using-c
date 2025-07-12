/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[9]={12,43,23,54,52,67,63,12,62};
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0;i<=8;i++){
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=0;i<=8;i++){
        if(arr[i]!=max  && smax<arr[i])
        smax=arr[i];
    }
    for(int i=0;i<=8;i++){
        if(arr[i]!=max  && tmax<arr[i] && arr[i]!=smax)
        tmax=arr[i];
    }
    
    
printf("%d",tmax);
    return 0;
}