#include<stdio.h>
int main()
{
int number;
int i;
int sum=0;
int fibo;
printf("enter the array size ");
scanf("%d",&number);
int array[number];
printf("how many number you want to fibonacci :");
scanf("%d",&fibo);
array[0]=0;
array[1]=1;
for(i=2;i<fibo;i++)
{
array[i]=array[i-2]+array[i-1];
}
for(i=0;i<number;i++)
{
printf("%d ",array[i]);
}



return 0;}
