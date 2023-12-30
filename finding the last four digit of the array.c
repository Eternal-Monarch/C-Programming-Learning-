#include<stdio.h>
int main()
{
int array[100];
int i;
int j;
int n;
int wanted_from_this;
printf("the limit : ");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%d",&array[i]);

    //printf("the inserted digit is : %d \n",array[],array[7],array[8],array[9]);

}
   printf("The Inserted input is : ");
for (i=0;i<n;i++)
{


    printf("%d",array[i]);
}
printf("\n");
printf("from which place you want to see the digit :");
scanf("%d",&wanted_from_this);

//printf("The Inserted input is : %d",array[i]
         printf("the %d digit of :",wanted_from_this);
         for(j=4;j>0;j--)
//for(i=1;i<=wanted_from_this;i++)
{
    printf("%d ",array[n-j]);
}


return 0;
}
