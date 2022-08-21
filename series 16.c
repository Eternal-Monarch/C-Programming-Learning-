#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    int oddcount = 0;
    int result,i,j;
    printf("enter a number : ");
    scanf("%d",&num);

    for(i=0; i<=num; i++)
    {
        if(i%2!=0)
            oddcount=oddcount+i;

    }
    for(j=0; j<=num; j++)
    {
        if(j%2==0)
            count =count+j;
    }
    result=oddcount-count;
    printf("%d",result);



    return 0;
}
