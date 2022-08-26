#include<stdio.h>
int main()
{
int i,j;
int num;
printf("enter a number : ");
scanf("%d",&num);
for(i=0;i<=num;i++)
{

    for(j=1;j<=i;j++)
    {

        printf("*",j+64);
    }


    printf("\n");

}
 for(j=num-1;j>=1;j--)

{

    for(i=1;i<=j;i++)
    {

        printf("*",j+64);
    }
    printf("\n");

}
return 0;

}



