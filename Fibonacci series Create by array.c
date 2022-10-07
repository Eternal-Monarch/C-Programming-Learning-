#include<stdio.h>
int main()
{
    int a,i,n;
    printf("enter the array size :");
    scanf("%d",&a);
    int array[a];
//fibonacci series 0 1 1 2 3 5 8 13 21
    printf("how much fibonacci number you want :");
    scanf("%d",&n);
    array[0]=0;
    array[1]=1;
    for(i=2; i<a; i++)
    {
        array[i]=array[i-2]+array[i-1];
        printf("%d ",array[i]);
    }

    return 0;
}
