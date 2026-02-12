#include<stdio.h>
int  find_max(int n1,int n2,int n3);
void main()
{
    int n1,n2,n3;
    printf("Enter three numbers : ");scanf("%d %d %d",&n1,&n2,&n3);
    int max = find_max(n1,n2,n3);
    printf("max = %d\n", max);
    

}
int  find_max(int n1,int n2,int n3)
{
    /* if you wite if and else if , else if wont be checked. you should write two if conditions*/
    int max=n1;
    if( n2>max )  
    {
        max = n2;
    }
    if(n3>max) 
        max = n3; 
    }
   
    return max;
}