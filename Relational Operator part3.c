#include<stdio.h>
int
main ()
{
    int marks;
    printf("Enter The Marks : \n");
    scanf("%d",&marks);
    if(marks>=80)


        printf("A+");

    else if(marks<=80 &&marks>=70)

        printf("A");

    else if(marks<=70 && marks>=60)

        printf("B++");


    else if(marks>=33)

        printf("Pass");
    else
        printf("Fail\n");


    return 0;

}


