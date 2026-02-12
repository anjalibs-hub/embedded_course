#include<stdio.h>
int find_min(int n1,int n2,int n3);
int main()
{
    int n1,n2,n3,min;
    printf("Enter three unumbers : ");scanf("%d %d %d",&n1,&n2,&n3);
    min = find_min(n1,n2,n3);
    printf("min = %d\n",min);
    return 0;
}
int find_min(int n1,int n2,int n3)
{
    int min = n1;
    if(n2<min)
    {
    
        min = n2;
    }
    if(n3<min)
    {
        min = n3;
    }
    return min;
}