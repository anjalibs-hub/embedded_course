#include<stdio.h>
 
void sum(float,float);
void sub(float,float);
void mul(float,float);
void division(float, float);

void main()
{
    float n1,n2;
    int choice;
    printf("Enter two numbers: "); scanf("%f %f",&n1,&n2);
    printf("Enter the operation you want to do :\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVISION\n"); scanf("%d",&choice);
    
    if(choice == 1)
        sum(n1,n2);
    else if(choice == 2)
        sub(n1,n2);
    else if (choice == 3)
        mul(n1,n2);
    else if(choice == 4)
        division(n1,n2);
    else
        printf("Invalid choice\n");
       
}

void sum(float a,float b)
{
    float result = a+b;
    printf("sum of %.2f and %.2f is %.2f\n",a,b,result);
} 

void sub(float a,float b)
{
    float result = a-b;
    printf("difference of %.2f and %.2f is %.2f\n",a,b,result);

} 

void mul(float a,float b)
{
    float result = a*b;
    printf("Product of %.2f and %.2f is %.2f\n",a,b,result);

}

void division(float a, float b)
{
    if(b==0)
    {
        printf("Division by zero error\n");

    }
    else
    {
        float result = a/b;
        printf("Quotient of %.2f and %.2f is%.2f\n",a,b,result);
    }

}
