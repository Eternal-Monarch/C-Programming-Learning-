#include<stdio.h>
int main()
{

    int num;
    int initial;
    int i;
    int j;
    int data;
    int arr[100];
    int temp=0;
    int temp2=0;
    scanf("%d",&initial);//making a limit--5
    for(i=0; i<initial; i++)// 0 1 2 3 4
    {
        scanf("%d",&arr[i]);
        //entry of the input
        temp=temp+arr[i];//1+0==1
        temp2=temp/initial;

    }
    //making 5 space in array
    printf("%d",temp2);

    return 0;
}
