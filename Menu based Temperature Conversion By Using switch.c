#include<stdio.h>
int main()
{
    int a;
    float temperature;
    float temp;
    printf("Temperature Conversion Menu \n");
    printf("1. Fahenheit to Celsius \n");
    printf("2. celcius to Farhenheit \n");
    printf("Enter choice : \n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    {

        printf("Fahenheit to Celsius : \n");
        scanf("%f",&temperature);
        temp=(temperature-32)/1.8;
        printf("Temperature is %f \n",temp);
        break;




    }
    case 2:
    {


        printf("celcius to Farhenheit  : \n");
        scanf("%f",&temperature);
        temp=(1.8*temperature)+32;
        printf("temperature is %f\n",temp);
        break;

    }
    default:
        printf("not a correct option \n");




    }


}
