#include<stdio.h>
int main()
{

    int num1,num2,rcm,i,temp,temp1,temp2,temp3,sum;
    printf("enter a number :\n");
    scanf("%d",&num1);
temp=num1%10;//3
sum=temp;//3
temp2=num1/10;//12
rcm=temp2/10;//1
temp3=temp2%10;//2
printf("%d %d %d",sum,temp3,rcm);







    return 0;
}
