#include<stdio.h>
int main()
{
int number1,number2;
float sum;
float avg;
printf("Enter Two Numbers : ");
scanf("%d %d",&number1,&number2);
sum=number1+number2;

avg=(float)(sum/2);
printf("The Sum IS : %.2f",avg);
return 0;
}
