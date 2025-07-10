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
    printf("Enter element no %d :-",i);
    scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=5;i>=0;i--){
    printf("%d\n",arr[i]);
}
    return 0;
}