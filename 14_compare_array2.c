/*Problem 1: Array Equality (Order Matters)

Write a program to compare two arrays of equal size.
Arrays are EQUAL only if:

Same size

Same elements

Same order

📌 Example:

A = {1, 2, 3}
B = {1, 2, 3} → EQUAL
B = {3, 2, 1} → NOT EQUAL*/



#include<stdio.h>
#define EQUAL 1
#define NOT_EQUAL 0
int compare(int array1[],int array2[],int size);
int main()
{
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array1[size],array2[size];
    printf("Enter %d integers to be stored in the array1 : ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
        
    }
    printf("Enter %d integers to be stored in the array2 : ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array2[i]);
    }
    if(compare(array1,array2,size))
    {
        printf("Equal\n");

    }
    else
    {
        printf("Not Equal\n");
    }

}
int compare(int array1[],int array2[],int size)
{

    for(int i=0;i<size;i++)
    {
        
        if(array1[i] != array2[i])
        {
            return NOT_EQUAL;
        }

        
    }
    return EQUAL;
}