#include<stdio.h>
int main()
{

    int first,second,third;
    float  result;
    printf("enter Length \n");
    scanf("%d",&first);
    printf("enter width: \n");
    scanf("%d",&second);
    result=(first*second);


    //result=sqrt(result*(result-first)*(result-second)*(result-third));


    printf("the result is %.2f",result);
    return 0;
    }
