#include<stdio.h>
int main()
{
    int i;
    char a;
    char upper,lower;

printf("enter any upper case\n");
scanf("%c",&a);
//logic
//using the library toupper
lower=toupper(a);
printf("the lowercase sentence %c",lower);

return 0;
}
