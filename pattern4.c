#include<stdio.h>
int main()
{
    int num,row,col;
    int i;
    int j;
    printf("enter the number row : ");
    scanf("%d",&num);//3
   for(i=1;i<=num;i++)//row
   {
       for(j=1;j<=i;j++)//col
        printf("%c ",64+j);
       printf("\n");

   }
    return 0;


}
