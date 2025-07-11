/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={12,23,54,65,66,43,34,65,69};
    int sumeven=0,sumodd=0;
    for(int i=0;i<=8;i++){
        if(i%2==0) sumeven+=arr[i];
         else
        sumodd+=arr[i];
        
    }
   
    int res=sumeven-sumodd;
    printf("%d",res);
    return 0;
}