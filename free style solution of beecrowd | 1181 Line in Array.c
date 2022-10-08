#include<stdio.h>
int main()
{
    int array[3][3];
    int sum;
    int counter=0;
    int k;
    int row,colum;
    int i,j;
    int numberofrow;
    int row1;
    char ch;
//scanf("%d",&numberofrow);
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            scanf("%d",&array[i][j]);
            if(row1==i)
                sum+=array[i][j];
        }
        //printf("\n");
    }
    printf("A matrix : \n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("enter the row number : ");
    scanf("%d",&row1);
    for(k=0;k<3;k++)
    {
        sum=array[1][k];
        counter+=sum;
    }


 printf("enter the character : ");
    //scanf("%c",&ch);//char==s
    scanf("%s", &ch);
    if(ch=='s')

        printf("the sum is %d \n",counter);


if(ch=='a')

    printf("the average is %f \n",(float)counter/3);

    for(k=0;k<3;k++)
    {
        sum=array[1][k];
        counter=counter+sum;
    }




    return 0;
}
