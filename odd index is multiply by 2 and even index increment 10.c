/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={12,23,54,65,66,94,34,65,69};
    for(int i=0;i<=8;i++){
        if(i%2!=0) arr[i]*=2;
        else arr[i]+=10;
    }
    for(int i=0;i<=8;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}