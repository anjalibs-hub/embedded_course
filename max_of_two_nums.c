#include<stdio.h>
int find_max(int n1,int n2);
void main()
{
    int n1,n2;
    printf("Enter two numbers : "); scanf("%d %d",&n1, &n2);
    int max = find_max(n1,n2);
    printf("max value = %d\n",max);
}
int find_max(int n1,int n2)
{
    int max =0;
    if(n1>n2)
    {
        max = n1;
    }
    else{
        max = n2;
    }

    return max;
}