/*Write  program to find the sum and product of 2
numbers*/
#include<stdio.h>
void find_s_p(int n1,int n2,int *sum,int *product);
int main()
{
    int n1,n2,sum,product;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    find_s_p(n1,n2,&sum,&product);
    printf("The sum = %d\nThe product = %d\n",sum, product);
    return 0;
}
void find_s_p(int n1,int n2,int *sum,int *product)
{
    *sum = n1+n2;
    *product = n1*n2;
}
