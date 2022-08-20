#include<stdio.h>
int main()


{
    int num,num2,j,a=1,sum=0;
    float count=0;
    int b=2;
    float c;
    printf("enter an number : \n");
    scanf("%f",&c);
    for(float i=1.5; i<=c;i++)
    {

            printf("%.2f + ",i);
            count=count+i;
        }


    printf("= %.2f",count);



    return 0;
}
