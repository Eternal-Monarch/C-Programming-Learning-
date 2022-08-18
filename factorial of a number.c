#include<stdio.h>
int main()
{
    int i;
    int num1;
    int temp=1;
    int fact=1;

    printf("enter a number : ");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)

       {

        fact=fact*i;
       }
       printf("%d factorial is %d\n",num1,fact);
//fact=temp;






    return 0;


}
