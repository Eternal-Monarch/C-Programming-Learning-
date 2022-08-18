#include<stdio.h>
int main()
{
    int i=1;
    int num1;
    int temp=1;
    int fact=1;

    printf("enter a number : ");
    scanf("%d",&num1);
    while(i<=num1)

       {

        fact=fact*i;
        i++;
       }
       printf("%d factorial is %d\n",num1,fact);
//fact=temp;






    return 0;


}
