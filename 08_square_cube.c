/*Write a program to find the square and cube of a number*/
void find_c_s(int num,int *square,int *cube);
int main()
{
    int num, square, cube;
    printf("Enter the number: ");
    scanf("%d",&num);
    find_c_s(num,&square,&cube);
    printf("square = %d\ncube = %d\n",square,cube);
    return 0;

}
void find_c_s(int num,int *square,int *cube)
{

    *square = (num * num);
    *cube = ( num * num * num);
}