#include<stdio.h>
int
main ()
{
    int marks;
    printf("Enter The Marks : \n");
    scanf("%d",&marks);

    if(marks>0)
        printf("Positive\n");
    if(marks<0)
        printf("Negative\n");



    return 0;

}


