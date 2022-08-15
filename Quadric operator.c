#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    float d=(b*b-4*a*c);//b2-4ac
    float result= sqrt(d);
    float positiveresult=(-b+result)/(   2*a);
    float negativeresult=(-b-result)/(2*a);
    printf("x1 is : %f\n",positiveresult);
    printf("x2 is  : %f",negativeresult);




    return 0;
    }
