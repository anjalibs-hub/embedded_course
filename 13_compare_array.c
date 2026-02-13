/*W.A.P to compare two arrays (element by element).
– Take equal size arrays
– Arrays shall have unique values stored in random order
– Array elements shall be entered by user
– Arrays are compared “EQUAL” if there is one to one
mapping of array elements value
– Print final result “EQUAL” or “NOT EQUAL”
Example of Equal Arrays :
– A[3] = {2, -50, 17}
– B[3] = {17, 2, -50}*/
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
    int match_found;
    int matched[size] ;
    for(int i=0;i<size;i++)
    {
        matched[i] =0;
    }
    for(int i=0;i<size;i++)
    {
        match_found = 0;
        for(int j=0;j<size;j++)
        {
            if(array1[i] == array2[j] && matched[j] == 0)
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
