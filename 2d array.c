#include<stdio.h>
int main()
{

    int i;
    int j;
    int r;
    int c;
    int array[3][4];
    printf("enter row number :");
    scanf("%d",&r);
    printf("enter collum number :");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
printf("the 2d aray is :");
printf("\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }


    return 0;
}
