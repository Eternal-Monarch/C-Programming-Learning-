#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter the array size : ");
    scanf("%d",&a);
    int array1[a];
    printf("enter the elements in to the array : ");
    for(i=0; i<a; i++)
    {
        scanf("%d",&array1[i]);


    }
    printf("the 1st array is :");
    for(i=0; i<a; i++)

     {
         printf(" %d ",array1[i]);
     }




    int array_copied[a];
    for(j=0; j<a; j++)
    {
        array_copied[j]=array1[j];
    }

    printf("\nthe copied array is :  ");
    for(i=0;i<a;i++)
    {

        printf("%d ",array_copied[i]);
    }


    return 0;
}
