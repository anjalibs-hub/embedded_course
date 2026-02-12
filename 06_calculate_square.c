#include<stdio.h>
int find_square(int num);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int result = find_square(num);
    printf("The square of %d is : %d\n",num,result);
    return 0;
}
int find_square(int num)
{
    return (num *num);
}
