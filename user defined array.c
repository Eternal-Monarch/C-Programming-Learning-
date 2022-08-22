#include<stdio.h>
int main()
{

    int fibo,first,i,num,second;

    printf("enter the array size : ");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {

        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }

    return 0;
}
