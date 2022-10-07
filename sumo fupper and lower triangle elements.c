#include<stdio.h>
int main()
{
    int number,i,j;
    int uppersum=0;
    int lowersum=0;
    int row,colum;
    printf("enter the row size :");
    scanf("%d",&row);
    printf("enter the colum size :");
    scanf("%d",&colum);
    int array[row][colum];
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    printf("A matrix : ");
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            if(i<j)
                uppersum=uppersum+array[i][j];
        }
    }
    printf("the upper triangles %d \n",uppersum);

    for(i=0;i<row;i++)
    {
        for(j=0;j<colum;j++)
        {
            if(i>j)
                lowersum=lowersum+array[i][j];
        }
    }
    printf("the upper triangles %d",lowersum);


}
