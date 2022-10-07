#include<stdio.h>
int main()
{ int row,colum,i,j;
printf("enter the row number : ");
scanf("%d",&row);
printf("enter the colum number: ");
scanf("%d",&colum);
int array[row][colum];
//sari--row
for(i=0;i<row;i++)
{
    //scanf("%d",&row[i]);
    //colum
    for(j=0;j<colum;j++)
    {
        scanf("%d",&array[i][j]);

    }
    //printf("\n");
}
printf("the array is \n");
for(i=0;i<row;i++)
{

    for(j=0;j<colum;j++)
    {
        printf("%d\t",array[i][j]);
    }
    printf("\n");
}
return 0;

}
