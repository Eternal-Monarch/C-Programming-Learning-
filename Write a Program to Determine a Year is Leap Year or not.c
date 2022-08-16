#include<stdio.h>
int
main ()
{
    int number;

    scanf("%d",&number);

    if(number%400==0)
    {
        printf("Leap Year\n");
    }
    else if(number%4==0 && number%100!=0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }


getch();

    return 0;

}


