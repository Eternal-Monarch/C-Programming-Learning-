#include<stdio.h>
int main()


{
    int num,num2,j,a=1,sum=0;
    int count=0;
    int  b=2;
    int c;
    printf("enter an number : \n");//5
    scanf("%d",&c);
    for(int i=1; i<=c;i=i+2)
    {
        if(i%2!=0)

            printf("%d + ",i);
            count=count+ i*i;
        }


    printf("= %d",count);



    return 0;
}
