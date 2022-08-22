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
    int store=0;
    int min=0;
    int max=0;
    int temp2=0;
    int temp3=0;
    printf("how many number you want to input : ");
    scanf("%d",&initial);//10
    for(i=0;i<initial;i++)
    {
        scanf("%d",&arr[i]);

    }
    max=arr[0];
    for(i=0;i<initial;i++)
   {

    if(max<arr[i])
        {
            max=arr[i];
           temp2=i;



        }
        //min=max/store;//avg
   }

    min=arr[0];
    for(i=0;i<initial;i++)
   {

    if(min>arr[i])
        {
            min=arr[i];
           temp3=i;



        }
    printf("the highest value is %d is on position on %d with the minimum %d is on postion %d",max,temp2+1,min,temp3+1);




    return 0;
}
}
