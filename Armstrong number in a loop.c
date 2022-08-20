#include<stdio.h>
int main()
{
    int i,sum=0,temp,r,initial,final,number1;
    printf("enter the number :");
    scanf("%d %d",&initial,&final);
    for(i=initial; i<=final; i++)
    {


        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;

        }
        if(sum==i)
        {
            printf("%d\t",sum);
        }
        sum=0;

    }
    return 0;
}

