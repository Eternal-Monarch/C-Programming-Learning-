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
upper=tolower(a);
printf("the lowercase sentence %c",upper);

return 0;
}
