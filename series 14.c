#include<stdio.h>
int main ()
{


    int i,j;
    int count=1
    ;
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//4
    for(i=1;i<=num;i++)//1 2 3 4
    {

    if(i%2!=0){
    printf("%d * ",i); //2 4
        count=count*i*i;//0
        //0=0*i
    }

    }
    printf(" = %d" ,count);
    return 0;
}
