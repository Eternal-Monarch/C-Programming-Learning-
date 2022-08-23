#include<stdio.h>
int main()
{
    int number,i;
    printf("enter the array size : ");
    scanf("%d",&number);
    int array1[number];
    int array2[number];
    printf("enter the element : ");
    {
        for(i=0; i<number; i++)


       {

        scanf("%d",&array1[i]);
       }
       printf("the array1 is : ");
       for(i=0; i<number; i++)
       printf(" %d ",array1[i]);
 for(i=0; i<number; i++)
 {
     array2[i]=array1[i];

 }
    }
    printf("\n");
    printf("the array2 is :");
     for(i=0; i<number; i++)

        printf(" %d ",array2[i]);







    return 0;
}
