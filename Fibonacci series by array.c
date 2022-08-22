#include<stdio.h>
int main()
{

    int fibo,first=0,i,num,num2,second=1;

    printf("enter the array size : ");
    scanf("%d",&num);
    int arr[num];
    printf("how many fibonacci series : ");
    scanf("%d",&num2);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<num;i++)
        {

        arr[i]=arr[i-1]+arr[i-2];


    }

printf("\n");
for(i=0;i<num;i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}
