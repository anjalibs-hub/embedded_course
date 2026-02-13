/*
Write a program to compare two arrays of equal size.

Arrays are EQUAL if:

Same size

Same elements

Order does NOT matter

Elements are unique

Each element in array A must map to exactly one element in array B

Print “EQUAL” or “NOT EQUAL”.

📎 Example
A = {2, -50, 17}
B = {17, 2, -50}   → EQUAL

A = {1, 2, 3}
B = {1, 2, 4}      → NOT EQUAL
*/


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
    int match_found ;
    int matched_array[size];
    for(int i=0;i<size;i++)
    {
        matched_array[i] =0;
    }
    for(int i=0;i<size;i++)
    {
        match_found =0;
        for(int j=0;j<size;j++)
        {
            if(array1[i] == array2[j] && matched_array[j] ==0)
            {
                match_found =1;
                matched_array[j] = 1;
                break;
            }
            
        }
        if(match_found ==0)
            {
                return NOT_EQUAL;
            }

    }
    return EQUAL;

}