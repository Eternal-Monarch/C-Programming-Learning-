#include<stdio.h>
int main()
{

    int num;
    int initial;
    int arr[5],i;
    scanf("%d",&initial);//making a limit--5
    for(i=0; i<initial; i++)// 0 1 2 3 4
    {
        scanf("%d",&arr[i]);//entry of the input
    }
    //making 5 space in array
    for(i=0; i<initial; i++)//5

    {

        printf("%d ",arr[i]);
    }
}
