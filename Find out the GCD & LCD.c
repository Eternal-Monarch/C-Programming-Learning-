#include<stdio.h>
int main()
{

    int num1,num2,rcm,i,temp1,temp2;
    printf("enter 2 number :");
    scanf("%d %d",&num1,&num2);
    temp1=num1;
    temp2=num2;
    while(num2!=0)
    {
        rcm=num1%num2;
        num1=num2;
        num2=rcm;
    }
    printf("the gcd is %d\n",num1);
    printf("the lcd is %d",(temp1*temp2)/num1);
    return 0;
}
