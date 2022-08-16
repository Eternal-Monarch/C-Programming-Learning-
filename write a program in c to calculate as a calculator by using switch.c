#include<stdio.h>
int main()
{

    int a,b;
    int temp;
    char character;
    printf ("enter the operation : (+ - * /) :");
    scanf("%c",&character);
    switch(character)
    {
     case '+':
       {

        printf("enter 2 numbers : \n");
        scanf("%d %d",&a,&b);
        temp=a+b;
        printf("the sum is %d",temp);
        break;
    }
    case '-':
        {
     printf("enter 2 numbers : \n");
        scanf("%d %d",&a,&b);
        temp=a-b;
        printf("the sub is %d",temp);
        break;


    }
    case '*':
        {

     printf("enter 2 numbers : \n");
        scanf("%d %d",&a,&b);
        temp=a*b;
        printf("the mul is %d",temp);
        break;
        }
            case '/':
                {


     printf("enter 2 numbers : \n");
        scanf("%d %d",&a,&b);
        temp=a/b;
        printf("the div is %d",temp);
        break;
                }
                    default:
                        printf("not a vaid option\n");
    }
    return 0;

}
