#include<stdio.h>
int
main ()
{
    int character;

    scanf("%c",&character);

    if(character>='A' && character<='Z')
    {
        printf("Capital\n");
    }
    else if(character>='a' && character<='z')
    {

        printf("Small Letter\n");
    }
    

    return 0;

}


