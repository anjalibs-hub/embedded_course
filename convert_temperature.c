#include<stdio.h>
float convert_temp(float temp_F);
int main()
{
    float temp;
    printf("Enter the temperature in Farenheit : ");
    scanf("%f",&temp);
    float temp1 = convert_temp(temp);
    printf("Temperature in degree celcius : %.2f\n",temp1);
    return 0;
    
}
float convert_temp(float temp_F)
{
    float temp_D = ((5.0f/9) *(temp_F - 32));
    return temp_D;
}
