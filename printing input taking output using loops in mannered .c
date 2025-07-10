/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<=5;i++){
    int a=i+1;
    printf("Enter element no %d :-",a);
    scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("%d",arr[3]);

    return 0;
}