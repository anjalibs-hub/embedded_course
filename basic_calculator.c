#include<stdio.h>
int sum(int n1,int n2);
int diff(int,int);
int mul(int,int);
float div(float,float);
void main()
{
    int n1,n2;
    float n3,n4;
    printf("Enter two numbers: "); scanf("%d %d",&n1,&n2);
    
    printf("enter two numbers: "); scanf("%f %f",&n3,&n4);

    printf("Sum = %d\n",sum(n2,n2));
    printf("difference = %d\n",diff(n1,n2));
    printf("product = %d\n",mul(n1,n2));
    printf("quotient = %f\n",div(n3,n4));
    
}
int sum(int n1,int n2)
{
    return n1+n2;
}
int diff(int n1,int n2)
{
    return (n1-n2);
}
int mul(int n1,int n2)
{
    return (n1*n2);
}
float div(float n3,float n4)
{
    return (n3/n4);
}