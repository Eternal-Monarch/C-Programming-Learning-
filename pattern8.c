#include<stdio.h>
int main()
{

    int fibo,first=0,i,j,num,num2,second=1;

    printf("enter the array size : ");
    scanf("%d",&num);//5
    int arr[num];
    int arr2[num];
    printf("enter the number:  ");//1 2 3 4 5

        for(i=0;i<num;i++)
    {


    scanf("%d",&arr[i]);
    }
    printf("array 1 :");

    for(j=0;j<num;j++)
    {


    printf("%d ",arr[j]);

    }
    //copying all elemenent
     for(i=0;i<num;i++)
        {
            arr2[i]=arr[i];

        }
        printf("\n");
        printf("array 2 :");
        for(j=0;j<num;j++)
    {

printf("%d ",arr2[j]);
}
    return 0;

}







