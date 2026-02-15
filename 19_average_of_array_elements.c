/*Write a program to find the average of 5 array elements
using function*/
#include<stdio.h>
int average(int *array,int size);
int main()
{
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int avg = average(array,size);
    printf("Average of array elements = %d\n",avg);
    return 0;

}
int average(int *array,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum += *(array+i);
    }
    int avg = sum/size;
    return avg;


}