#include<stdio.h>
int main()
{
    int number,i;
    int search;
    printf("enter the array size : ");
    scanf("%d",&number);
    int array1[number];
    int array2[number];
    printf("enter the element : ");

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

    printf("\n");
    printf("the array2 is :");
    for(i=0; i<number; i++)

    {

        printf(" %d ",array2[i]);
    }
    printf("\nwhich element you want to find :");
    scanf("%d",&search);
    for(i=0; i<number; i++)
    {


        if(array2[i]==search)
        {


            printf("\nthe number is %d is found on the location no : %d ",search,i+1);
            break;

        }
    }
    if(array2[i]!=search)
        printf("%d is not found on the array ",search);



    return 0;
}
