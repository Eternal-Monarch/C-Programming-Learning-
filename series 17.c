#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    int oddcount = 0;
    int result,i,j;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        printf("%d + ",i);
        count=count+i;
    }
    printf("= %d ",count);





    return 0;
}
