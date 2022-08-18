#include<stdio.h>
int main()
{

   int i=1;
   int num1;
   int temp;
   printf("Enter a Num\n");
   scanf("%d",&num1);
do

{
    temp=i*num1;
    printf("%d * %d = %d\n",num1,i,temp);
    i++;
}
while(i<=10);

return 0;


}
