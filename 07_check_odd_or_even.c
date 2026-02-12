#include<stdio.h>
#define TRUE  1
#define FALSE 0
int is_odd_or_even(int num);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(is_odd_or_even(num))
    {
        printf("Even\n");
    } 
    else
    {
        printf("odd\n");
    }
    return 0;

}
int is_odd_or_even(int num)
{
 
    if(num%2==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
