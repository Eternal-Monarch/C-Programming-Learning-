#include<stdio.h>
int main()
{
int number1,number2;
int sub, mul, div, remainder;
int sum;
float avg;
printf("Enter Two Numbers : ");
scanf("%d %d",&number1,&number2);
sum=number1+number2;
sub=number1-number2;
mul=number1*number2;
div=number1/number2;
remainder=number1%number2;

avg=(float)(sum/2);
printf("The Sum IS : %d\n",sum);
printf("the sub is %d\n",sub);
printf("the mul is %d\n",mul);
printf("the div is %d\n",div);
printf("the remainder is %d",remainder);
return 0;
}
