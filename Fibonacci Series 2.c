#include<stdio.h>
int main()
{
int number,i,count=0,temp;
int first=0,second=1;
printf("enter the number : ");
scanf("%d",&number);
for(i=0;i<number;i++)
{
if(number<=1)
    temp=number;
else
{

    temp=first+second;
    first=second;
    second=temp;

}
printf("%d ",temp);
}
return 0;
}
