#include<stdio.h>
int main()
{

    int num;
    int initial;
    int i;
    int j;
    int data;
    int arr[100];
    scanf("%d",&initial);//making a limit--5
    for(i=0; i<initial; i++)// 0 1 2 3 4
    {
        scanf("%d",&arr[i]);//entry of the input
    }
    //making 5 space in array
    for(j=0; j<initial; j++)//5

    {

        printf("%d ",arr[j]);
        printf("\n");
    }
    printf("which data you want to found : ");
    scanf("%d",&data);
    //10
    for(j=0; j<initial; j++)
    if(arr[j]==data)
    {
        printf("data is found %d\n",j+1);
        break;
    }
    if(arr[j]!=data)
    {
         printf("data is not found");
    }
    return 0;
}
