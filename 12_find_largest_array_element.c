/*W.A.P to find the largest array element
– Example 100 is the largest in {5, 100, -2, 75, 42}*/
#include<stdio.h>
int find_largest(int array[],int size);
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d array elements :",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("The largest element in the array is %d\n",find_largest(array,size));
    return 0;
    

}
int find_largest(int array[],int size)
{
    int largest = array[0];
    for(int i=1;i<size;i++)
    {
        if(array[i]>largest)
        {
            largest = array[i];
        }
    }
    return largest;

}