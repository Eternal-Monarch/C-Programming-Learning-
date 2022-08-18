#include<stdio.h>
int
main ()
{


    int num1, i;
    int count=0;


    printf ("enter a number : ");


    scanf ("%d", &num1);


    for (i = 2; i <num1; i++)



    {
        if(num1%i==0)
        {

            count++;

            break;

        }
    }

    if (count==0)



        printf (" prime number\n");

    else
        printf("not prime number");















    return 0;




}




