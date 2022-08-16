#include<stdio.h>
int
main ()
{
    int marks;
    printf("Enter The Marks : \n");
    scanf("%d",&marks);

    if(marks%2==0)
        printf("Even\n");
    if(marks%2!=0)
        printf("odd\n");



    return 0;

}


