#include<stdio.h>
#include<math.h>
int main()
{

    float radius;
    float  area;
    //float PI=3.1416;
    printf("enter radius \n");
    scanf("%f",&radius);

    float result=M_PI*radius*radius;


    //result=sqrt(result*(result-first)*(result-second)*(result-third));


    printf("the result is %.4f",result);
    return 0;
    }
