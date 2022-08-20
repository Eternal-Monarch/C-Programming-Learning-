#include<stdio.h>
int main()
{
    int num,i=1,count=0;
    printf("enter an number : ");
    scanf("%d",&num);//5
    printf("1 + 2 + 3 +.....+ %d = ",num);
   //1 2 3 4 5
    do
        {
        count=count+i;//1 2
        i++;

    }
     while(i<=num);
    printf("%d",count);





    return 0;
}
