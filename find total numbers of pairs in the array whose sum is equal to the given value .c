/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int totalpairs;
    int x=12;
    for(int i=0;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("\n The %d pairs",totalpairs);
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    
    return 0;
}