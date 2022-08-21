#include<stdio.h>
int main()
{
    int num,row,col;
    int i;
    int j;
    printf("enter the number row : ");
    scanf("%d",&num);//3
   for(j=num;j>=1;j--)//row
   {
       for(i=1;i<=j;i++)//col
        {
            printf("%d ",i%2);
        }
        printf("\n");

   }
    return 0;


}
