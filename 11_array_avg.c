/*W.A.P to find the average of elements stored in a array.
– Read value of elements from user
– For given set of values : { 13, 5, -1, 8, 17 }
– Average Result = 8.4*/

#include<stdio.h>
void find_avge(int array[],int size);
int main()
{
    int size =5;
    int array[size];
    printf("Enter 5 integers to be stored in the array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);

    }
    find_avge(array,size);
    return 0;


}
void find_avge(int array[],int size)
{
    float sum=0; float avg;
    for(int i=0;i<size;i++)
    {
        sum+= array[i];
    }
    avg = sum/size;
    printf("For given set of values: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf(",Average result = %.2f\n",avg);
    
}