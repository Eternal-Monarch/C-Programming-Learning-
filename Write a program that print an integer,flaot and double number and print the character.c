#include<stdio.h>
int main()
{
    int number=10;
    float number2=10.123456789;
    double number3 =20.1010232525698789879646545;
    char character ='z';
    printf("%d\n",number);
    printf("%.3f\n",number2);//6 position
    printf("%lf\n",number3);//16 position
    printf("%c",character);//c is the express way to release the character

    return 0;
}
