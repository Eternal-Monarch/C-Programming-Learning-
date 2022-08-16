#include<stdio.h>
int
main ()
{


int a,b;

printf ("Enter 2 Number: \n");

scanf ("%d %d", &a,&b);
if(a>b)
{
    printf("a is greater than b\n");
}
else if(b>a)
{
    printf("b is greater than a");
}
else if (a==b)
{
    printf("both are equal\n");
}




return 0;

}


