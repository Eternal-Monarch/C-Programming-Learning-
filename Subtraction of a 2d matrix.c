#include<stdio.h>
int main()
{
    int i,j;
    int r,c;
    int array[10][10];
    int array2[10][10];
    int array3[10][10];
    printf("enter the row number :");
    scanf("%d",&r);
    printf("enter the collum number :");
    scanf("%d",&c);
// A loop
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A [%d][%d]= ",i,j);
            scanf("%d",&array[i][j]);

        }
        printf("\n");



    }
    // B loop
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("B [%d][%d]= ",i,j);
            scanf("%d",&array2[i][j]);

        }
        printf("\n");



    }
    //printing A matrix
    printf("the first array is : ");
    for(int a=0; a<r; a++)
    {
        // printf("\t");
        printf("\n");
        for(int b=0; b<c; b++)
        {

            printf("%d ",array[a][b]);

        }
        printf("\n");
    }

    //printing A matrix
    printf("the 2nd array is : ");
    for(int a=0; a<r; a++)
    {
        // printf("\t");
        printf("\n");
        for(int b=0; b<c; b++)
        {

            printf("%d ",array2[a][b]);

        }
        printf("\n");
    }
    // c loop

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            array3[i][j]=array[i][j]-array2[i][j];

        }
        printf("\n");



    }
    //printing A matrix
    printf("the subtraction of the  array is : ");


    for(int a=0; a<r; a++)
    {
        // printf("\t");
        printf("\n");
        for(int b=0; b<c; b++)
        {

            printf("%d ",array3[a][b]);

        }
        printf("\n");
    }
    return 0;
}
