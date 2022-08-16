#include<stdio.h>
int main()
{

    int a,b;
    int temp;
    int i=0;
   for(i=0;i<=20;i++)
   {

       if(i%3==0)
        continue;
       printf("%d is %d\n",i,i);
       if(i==10)
        break;
   }
    return 0;

}
