#include<stdio.h>
int main()
{
int i,sum=0,temp,r,number1;
printf("enter a number : \n");
scanf("%d",&number1);
temp=number1;
while(temp!=0)
{
    r=temp%10;
    sum=sum+r*r*r;
    temp=temp/10;

}
if(sum==number1)
    printf("armstrong");
else
    printf("not armstrong");

return 0;
}
