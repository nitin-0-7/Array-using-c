/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int x=12;
    int totaltriplets=0;
    for(int i=0;i<=8;i++){
        for(int j=i+1;j<=8;j++){
            for(int k=j+1;k<=8;k++)
            if(arr[i]+arr[j]+arr[k]==12){
                totaltriplets++;
                printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
            }
        }
    }
printf("\n%d",totaltriplets);
    return 0;
}