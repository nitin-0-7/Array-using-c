1)ARRAY:-it contain element of same datatype like if you want to add integer datatype and float datatype both in the array it is not possible because it store the element of same datatype.
2)it stored in contiguous memory location

#include <stdio.h>

int main()
{
    int arr[5]={2,3,4,1,5};
    for(int i=0;i<5;i++) printf("%p\n",&arr[i]);

    return 0;    //This code prove that an array is stored in contiguous memory allocation
}
3)An array can be used for comparing same datatype.
4)In short array can solve question where we need to compare like maxvalue of an array,minimum value of an array,missing value from an array and many more question where comparison occur.
