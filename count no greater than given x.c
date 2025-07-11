/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={12,35,54,32,65,75,24,17,84};
    int x=35;
    int count=0;
    for(int i=0;i<=8;i++){
        
        if( x<arr[i]) count++;
        
    }
        printf("%d ",count);
    return 0;
}