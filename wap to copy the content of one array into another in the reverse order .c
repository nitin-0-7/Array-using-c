/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int brr[9];
    printf("This is forward order of the array\n");
    for(int i=0;i<=8;i++){
        brr[i]=arr[i];
    }
    for(int i=0;i<=8;i++){
        printf("%d ",brr[i]);
    }
    printf("\n");
   printf("This is reverse order of the array\n");
    for(int i=0;i<=8;i++){
       brr[i]=arr[8-i];
    }
    for(int i=0;i<=8;i++){
    printf("%d ",brr[i]);
}
    return 0;
}