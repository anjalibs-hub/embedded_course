#include <stdio.h>

#define BITS (sizeof(unsigned int) * 8)

void Dec2Bin(unsigned int num)
{
    for(int i = BITS - 1; i >= 0; i--)
        printf("%d ", (num >> i) & 1);
    printf("\n");
}

unsigned int setBit(unsigned int num, int pos)
{
    return num | (1U << pos);
}

unsigned int clrBit(unsigned int num, int pos)
{
    return num & ~(1U << pos);
}

unsigned int toggleBit(unsigned int num, int pos)
{
    return num ^ (1U << pos);
}

int main()
{
    unsigned int num;
    int pos;

    printf("Enter number : ");
    scanf("%u", &num);

    printf("Enter position : ");
    scanf("%d", &pos);

    printf("binary value of  %d :",num);
    Dec2Bin(num);

    printf("after set bit operation : ");
    num = setBit(num, pos);
    Dec2Bin(num);

    printf("after clear bit operation : ");
    num = clrBit(num, pos);
    Dec2Bin(num);

    
    printf("after toggle bit operation : ");
    num = toggleBit(num, pos);
    Dec2Bin(num);

    return 0;
}