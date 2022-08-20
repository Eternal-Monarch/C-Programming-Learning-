#include<stdio.h>
int main()


{
    int num,num2,i,j,a=1,sum=0,count=0,b=2;
    printf("enter an number : \n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i%2==0)

        {
            printf("%d + ",i);
            count=count+i;
        }

    }
    printf("= %d",count);



    return 0;
}
