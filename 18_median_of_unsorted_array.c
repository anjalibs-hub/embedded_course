/*
Test Case 1: 

Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5

Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5                         
Test Case 2:
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
Median of array1 : 4
Median of array2 : 9.5                                      
Median of both arrays : 6.75 
*/

#include<stdio.h>
void bubble_sort(int array[],int size);
float find_median(int array[],int size);
int main()
{
    int size1,size2;
    printf("Enter te 'n' value of Array A : ");
    scanf("%d",&size1);
     printf("Enter te 'n' value of Array B : ");
    scanf("%d",&size2);

    int arrayA[size1];
    printf("enter the element one by one for Array A : ");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arrayA[i]);
    }

    int arrayB[size2];
    printf("enter the element one by one for Array B : ");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arrayB[i]);
    }
    float  median_A = find_median(arrayA,size1);
    printf("Median of arrayA = %.2f\n",median_A);
    float  median_B = find_median(arrayB,size2);
    printf("Median of arrayB = %.2f\n",median_B);
    printf("Median of both array = %.2f\n",(median_A+median_B)/2.0);
    return 0;
}
void bubble_sort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
}
float find_median(int array[],int size)
{
    bubble_sort(array,size);
    if(size%2==0)
    {
        int pos1 = size/2;
        int pos2 = (size/2) - 1;
        float  median = (array[pos1] + array[pos2])/2.0;
        return median;
    }
    else
    {
        int pos = size/2;
        return array[pos];
    }
}