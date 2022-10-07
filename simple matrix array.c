#include<stdio.h>
int main()
{
    int i,j;
    int row,colum;
    printf("enter the row number : ");
    scanf("%d",&row);
    printf("enter the colum number : ");
    scanf("%d",&colum);
    int array[row][colum];
    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    printf(" A  = ");
    //printf("\n");
    for(i=0; i<row; i++)

    {
        printf("\t");

        for(j=0; j<colum; j++)
        {
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }
    printf("enter the row number : ");
    scanf("%d",&row);
    printf("enter the colum number : ");
    scanf("%d",&colum);
    int array2[row][colum];
    for(i=0; i<row; i++)
    {
        for(j=0; j<colum; j++)
        {
            scanf("%d",&array2[i][j]);
        }
        printf("\n");
    }
    printf(" B  = ");
    //printf("\n");
    for(i=0; i<row; i++)

    {
        printf("\t");

        for(j=0; j<colum; j++)
        {
            printf("%d \t",array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
