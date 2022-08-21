#include<stdio.h>
int main()
{
    int  i,j;
    int num;
    int count=0;
    printf("Enter a Number : \n");
    scanf("%d",&num);
    printf("1 + 1/2 + 1/3 + .... 1/%d",num);
for(i=1;i<=num;i++)
{

    for(j=2;j<=num;j++)
    count=(i/j)+(1);
}
printf(" = %d ",count);
return 0;

}
