#include<stdio.h>
int
main ()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is larger\n",a);
    }

    else if(b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else if(c>a && c>b)
    {
        printf("%d is greater",c);
    }




    return 0;

}


