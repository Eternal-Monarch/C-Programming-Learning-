#include<stdio.h>
int main()
{
    //print an integer number and float number from user
    int integer;
    float number;
    printf("Enter an integer number and float number\n");
    scanf("%d %f",&integer,&number);
    printf("The number you have inputed %d %f",integer,number);
    return 0;
}
