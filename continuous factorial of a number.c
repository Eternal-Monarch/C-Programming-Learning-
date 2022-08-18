#include<stdio.h>
int main()
{
    while(1)
    {


    int i=1;
    int num1;
    int temp=1;
    int fact=1;

    printf("enter a number : ");
    scanf("%d",&num1);
    do

       {

        fact=fact*i;
        i++;
       }
       while(i<=num1);
       printf("%d factorial is %d\n",num1,fact);
//fact=temp;




    }

    return 0;


}
