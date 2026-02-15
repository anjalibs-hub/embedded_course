/*Write a program to square each element of array which
has 5 elements*/
#include<stdio.h>
void read_elements(int *array,int size);
void square_array(int *array,int size);
void print_array(int *array,int size);
int main()
{
    int size,*array_ptr;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int array[size];
    read_elements(array,size);
    printf("Before squaring : "); 
    print_array(array,size);
    square_array(array,size);
    printf("After squaring : "); 
    print_array(array,size);
    return 0;
}

void read_elements(int *array,int size)
{
    printf("Enter the elements of the array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",array+i);
        
    }

}
void square_array(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        array[i] = array[i]*array[i];
    }
}

void print_array(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*array++);
    }
    printf("\n");
}
