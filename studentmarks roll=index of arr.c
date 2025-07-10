/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int studentmarks[10]={39,67,83,23,32,62,33,32,43,45};
    for(int roll=1;roll<11;roll++)
        if(studentmarks[roll]<35){
            printf("%d\n",roll);
        }
    

    return 0;
}