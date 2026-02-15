/*WAP to check whether a machine is Little or Big Endian*/
#include<stdio.h>
int main()
{
    int num = 0x12345678;
    char *cptr = (char *)&num;
    if(*cptr == 0x78)
    {
        printf("Little Endian System\n");
        printf("%x\n",*cptr);
    
    }
    else{
        printf("Big Endian System\n");
        printf("%x\n",*cptr);
    }
    return 0;

}