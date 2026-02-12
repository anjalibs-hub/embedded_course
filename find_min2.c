#include<stdio.h>
int find_min(int n1,int n2);
int main()
{
    int n1,n2,min;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    min =  find_min(n1,n2);
    printf("min = %d\n",min);
    return 0;
}
int find_min(int n1,int n2)
{
    int min = n1;
    if(n2<min)
    {
        min = n2;

    }
    return min;

}