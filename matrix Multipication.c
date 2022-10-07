#include<stdio.h>
int main()
{
    int row,colum,row2,colum2,i,j,k;
    int sum=0;
    printf("enter the first matrix row :");
    scanf("%d",&row);
    printf("enter the first matrix colum :");
    scanf("%d",&colum);
    printf("enter the second matrix row :");
    scanf("%d",&row2);
    printf("enter the second matrix colum :");
    scanf("%d",&colum2);
    int array[row][colum];
    int array2[row2][colum2];
    while(colum!=row2)
    {
        printf("Error!!!!!");
    printf("enter the first matrix row :");
    scanf("%d",&row);
    printf("enter the first matrix colum :");
    scanf("%d",&colum);
    printf("enter the second matrix row :");
    scanf("%d",&row2);
    printf("enter the second matrix colum :");
    scanf("%d",&colum2);
    int array[row][colum];
    int array2[row2][colum2];
    }

//first matrix
printf("A matrix \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    //second matrix
    printf("B matrix \n");
    for(i=0; i<row2; i++)

    {
        for(j=0; j<colum2; j++)
        {
            scanf("%d", &array2[i][j]);
        }
    }
    printf("A matrix :");
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            printf("%d " ,array[i][j]);

        }
        printf("\n");
    }
    printf("B matrix :");
    printf("\n");

    for(i=0; i<row2; i++)
    {
        for(j=0; j<colum2; j++)
        {
            printf("%d ",array2[i][j]);

        }
        printf("\n");
    }
    //matrix multipication
    int array3[row][colum2];
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum2;j++)
        {
           for(k=0;k<colum;k++)
           {
               sum=sum+array[row][colum]*array2[colum][row];
           }
           array3[row][colum]=sum;
           sum=0;
        }
        printf("\n");
    }
     printf("matrix Multipication:");
    printf("\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<colum2; j++)
        {
            printf("%d ",array3[i][j]);
            printf("\n");

        }

    }






    return 0;




}
