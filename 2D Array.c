#include<stdio.h>
int main()
{

    int i;
    int j;
    int r;
    int c;
    int array[3][4];
     int array2[3][4];
      int array3[3][4];
    printf("enter row number :");
    scanf("%d",&r);
    printf("enter collum number :");
    scanf("%d",&c);
    printf("enter elements for A matrix :");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)

        {
            printf("A[%d][%d]=",i,j);

            scanf("%d",&array[i][j]);
            printf("\n");
        }
    }
    printf("enter row number :");
    scanf("%d",&r);
    printf("enter collum number :");
    scanf("%d",&c);
    printf("enter elements for B matrix :");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)

        {
            printf("B[%d][%d]=",i,j);

            scanf("%d",&array2[i][j]);
            printf("\n");
        }
    }
printf("the 2d aray 1 is : \n");
//printf("\n");

     for(i=0;i<r;i++)

    { printf("\t");
        for(j=0;j<c;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

printf("the 2d aray 2 is : \n");
//printf("\n");

     for(i=0;i<r;i++)

    { printf("\t");
        for(j=0;j<c;j++)
        {
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }




    return 0;
}
