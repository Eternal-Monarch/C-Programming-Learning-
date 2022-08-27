#include<stdio.h>
int main()
{

    int i;
    int j;
    int array[3][4]=
    {
        {
            0,1,2,3
        },
        {

            4,5,6,7
        },
        {
            8,9,10,11
        },
    };
    //row
    for(i=0; i<3; i++)
    {
        //cpl
        for(j=0; j<4; j++)
        {

            printf("%d ",array[i][j]);
        }
        printf("\n");

    }
    return 0;
}
