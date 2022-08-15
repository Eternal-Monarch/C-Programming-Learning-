#include<stdio.h>

int main()
{


    float c, fahenheite;

    printf("enter the fahenheite : ");
    scanf("%f",&c);
    float result=(c-32)*1;
    result=result/1.8;
    printf("the centigrade is : %.2f ",result);
    return 0;
    }
