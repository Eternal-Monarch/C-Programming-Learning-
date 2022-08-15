#include<stdio.h>
int main()
{

    int surface,height;
    float result;
    printf("Enter the Surface : \n");
    scanf("%d",&surface);
    printf("Enter the Height : \n");
    scanf("%d",&height);
    result=(float)1/2*surface*height;

    printf("the triangle is %.2f",result);
    return 0;
}
