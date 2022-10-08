#include<stdio.h>
int main()
{
int number,i;
int sum;
scanf("%d",&number);
int array[number];
for(i=0;i<number;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<number;i++)
{
//printf("%d ",array[i]);
sum=i;
}
printf("%d\n",sum);

return 0;
}
