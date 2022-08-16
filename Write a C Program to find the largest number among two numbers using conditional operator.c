#include<stdio.h>
int main()
{

    int a,b;
    int temp;
    printf("ENter 2 Numbers : \n");
    scanf("%d %d",&a,&b);
    temp=(a>b)?a:b;
    printf("%d is large",temp);
    return 0;

    }
