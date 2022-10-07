#include<stdio.h>
int main()
{
    int a,i;
    printf("enter the array size: ");
    scanf("%d",&a);
    int array[a];
    printf("enter the element in array : ");
    for(i=0; i<a; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("the array is : ");
    for(i=0; i<a; i++)
    {
        printf("%d ",array[i]);
    }
     int maximum =array[0];
     for(i=1;i<a;i++)
     {


        if(maximum<array[i])
            maximum=array[i];
     }
     printf("\nmaximum is %d",maximum);
     int minimum=array[0];
     for(i=1;i<a;i++)
     {
         if(minimum>array[i])
            minimum=array[i];
     }
     printf("\n");
     printf("minimum is %d",minimum);

    return 0;
}
