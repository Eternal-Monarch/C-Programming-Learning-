#include<stdio.h>
int main()


    {
    int num,i=1,count=0;
    printf("enter an number : \n");
    scanf("%d",&num);//5

   //1 2 3 4 5
    do
        {
        printf("%d + ",i);
        count=count+i;//1 2

        i++;


    }
     while(i<=num);
    printf("= %d",count);
    printf("\n");





    return 0;
}
