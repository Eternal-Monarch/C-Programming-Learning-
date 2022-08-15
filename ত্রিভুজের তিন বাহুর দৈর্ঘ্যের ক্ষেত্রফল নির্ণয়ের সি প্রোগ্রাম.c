#include<stdio.h>
int main()
{

    int first,second,third;
    float result;
    printf("enter first second third values : \n");
    scanf("%d %d %d",&first,&second,&third);
    result=(first+second+third)/2;

    result=sqrt(result*(result-first)*(result-second)*(result-third));


    printf("the result is %.2f",result);
    return 0;
    }
