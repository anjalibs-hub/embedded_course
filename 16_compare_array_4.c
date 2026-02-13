/*Problem 3: Array Equality with Frequency (Duplicates Allowed)

Write a program to compare two arrays of equal size.

Arrays are EQUAL if:

Same size

Same elements

Order does NOT matter

Duplicates are allowed

Frequency must match (count of each element must be same)

Print “EQUAL” or “NOT EQUAL*/

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
    int match_found,i,j;
    int matched[size];
    for(i=0;i<size;i++)
    {
        matched[i] =0;
    }
    for(i=0;i<size;i++)
    {
        match_found =0;
        for(j=0;j<size;j++)
        {
            if(array1[i] == array2[j] && matched[j] ==0)
            {
                match_found =1;
                matched[j] =1;
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