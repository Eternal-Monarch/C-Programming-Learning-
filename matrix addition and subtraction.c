#include<stdio.h>
int main()
{
int row,colum,a,i,j;
printf("enter the row :");
scanf("%d",&row);
printf("enter the colum : ");
scanf("%d",&colum);
int array[row][colum];
printf("A Matrix : ");
for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {

      scanf("%d",&array[i][j]);

    }
    printf("\n");
}
printf("enter the row :");
scanf("%d",&row);
printf("enter the colum : ");
scanf("%d",&colum);
int array2[row][colum];
printf("B Matrix : ");
for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {

      scanf("%d",&array2[i][j]);

    }
    printf("\n");
}

printf("A matrix is : \n");
for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {
//A matrix
        printf("%d ",array[i][j]);

    }
    printf("\n");
}
printf("B matrix is : \n");
for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {
//B matrix
        printf("%d ",array2[i][j]);

    }
    printf("\n");
}
//Adding the different matrix
int array3[row][colum];
for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {
      array3[i][j]=array[i][j]+array2[i][j];

    }
}
    printf("C matrix : ");
    for(i=0;i<row;i++)

{
    printf("\n");
    for(j=0;j<colum;j++)
    {
//B matrix
        printf("%d ",array3[i][j]);

    }
    printf("\n");
}
    //printf("%d",array3);

    int array4[row][colum];
 for(i=0;i<row;i++)
{
    for(j=0;j<colum;j++)
    {
      array4[i][j]=array[i][j]-array2[i][j];

    }
}
    printf("D matrix : ");
    for(i=0;i<row;i++)

{
    printf("\n");
    for(j=0;j<colum;j++)
    {
//B matrix
        printf("%d ",array4[i][j]);

    }
    printf("\n");
}
    //printf("%d",array3);




return 0;
}
