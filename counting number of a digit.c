#include<stdio.h>
int main()
{
    int i,sum=0,temp,r,initial,final,count=0,n;
    printf("enter the number :");
    scanf("%d",&n);

  while(n!=0)
{
    n=n/10;
    count++;

}
printf("%d",count);

    return 0;
}

