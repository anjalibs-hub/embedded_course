
/*print Right pyramid of alphabets*/

#include<stdio.h>
int main()
{
    int row;
    printf("Enter the nubmer of rows : ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c ",'A'+j);

        }
        printf("\n");
    }
    return 0;
}