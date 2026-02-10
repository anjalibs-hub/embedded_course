#include<stdio.h>
void sum(float a, float b)
{
    printf("sum = %.2f\n", (a+b));
}
void sub(float a, float b)
{
    printf("diff = %.2f\n", (a-b));
}
void mul(float a, float b)
{
    printf("product = %.2f\n", (a*b));
}
void div(float a, float b)
{
     if(b==0)
        printf("division by zero error\n");
    else
        printf("quotient = %.2f\n", (a/b));   
}
void main()
{
    float n1,n2;
    char choice;
    printf("Enter two numbers : "); scanf("%f %f",&n1,&n2);
    printf("Choose the operation :\n1.+\n2.-\n3.*\n4./\n"); scanf(" %c",&choice);

    switch(choice)
    {
        case '+':
        sum(n1,n2);
        break;
        case '-':
        sub(n1,n2);
        break;
        case '*' :
        mul(n1,n2);
        break;
        case '/':
        div(n1,n2);
        break;
        default:
        printf("Invalid selection\n");
    

    }
    
}
