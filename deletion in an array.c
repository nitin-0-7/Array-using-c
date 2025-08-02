/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[],int size,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[9]={23,45,66,74,23,56,89,23,80};
    int size=9;
    int index=6;
    display(arr,size);
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    

    return 0;
}