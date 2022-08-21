#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    int oddcount = 0;
    int result,i,j;
    int fibo;
    int first=0;
    int second =1;
    printf("enter a number : ");
    scanf("%d",&num);//5
    while(count<num)

        {
            if(count<=1)
            {


            fibo=count;
            }

        else


        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
 printf("%d ",fibo);
 count++;




    }







    return 0;


}
