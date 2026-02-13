/*

Problem 4: Check if One Array is a Permutation of Another (Using Sorting)

Problem Statement (exact)

Write a program to check whether two arrays of equal size are permutations of each other.

Arrays are EQUAL if:

Same size

Same elements

Order does NOT matter

Duplicates are allowed

Frequency of each element must match

You are NOT allowed to use any extra array like matched[]

You MAY modify the original arrays

Output

Print:

EQUAL if they are permutations

NOT EQUAL otherwise

📌 Examples
A = {3, 1, 2, 2}
B = {2, 3, 2, 1}   → EQUAL

A = {1, 2, 3}
B = {1, 2, 2}      → NOT EQUAL

*/



#include<stdio.h>
#define EQUAL 1
#define NOT_EQUAL 0
void bubble_sort(int array[],int size);
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
void bubble_sort(int array[],int size)
{
    int i,j;
    for(i=0;i<size -1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int compare(int array1[],int array2[],int size)
{
    bubble_sort(array1,size);
    bubble_sort(array2,size);
    for(int i=0;i<size;i++)
    {
        if(array1[i] != array2[i])
        return NOT_EQUAL;
    }
    return EQUAL;
}