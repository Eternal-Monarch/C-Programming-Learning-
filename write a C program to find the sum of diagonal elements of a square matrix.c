#include<stdio.h>
int main()
{
    int number,i,j,sum=0;
    int row,colum;
    printf("enter the row size : ");
    scanf("%d",&row);
    printf("enter the colum size : ");
    scanf("%d",&colum);
    int a[row][colum];
    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("A matrix is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            printf("%d \t",a[i][j]);

        }
        printf("\n");

    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            if(i==j)
//{      printf("%d",a[i][j]);

            {
                sum=sum+a[i][j];
            }
        }
//printf("%d",array[row][colum]);
    }
    printf("\n");
    printf("the sum is %d",sum);
    return 0;
}

