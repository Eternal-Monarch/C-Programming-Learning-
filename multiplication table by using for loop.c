#include<stdio.h>
int main()
{

   int i;
   int num1;
   int temp;
   printf("Enter a Num\n");
   scanf("%d",&num1);

for(i=1;i<=10;i++)
{
    temp=i*num1;
    printf("%d * %d = %d\n",num1,i,temp);
}

return 0;


}
