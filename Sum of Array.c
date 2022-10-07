#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the array size : ");
scanf("%d",&a);
int array[a];
printf("Enter the element into the array : ");
int counter =0;
for(i=0;i<a;i++)
{

    scanf("%d",&array[i]);
    counter=counter+array[i];
}
printf("the element in the array is: ");
for(i=0;i<a;i++)
{

    printf("%d ",array[i]);

}


printf("\nthe total sum is ");


printf("%d",counter);

return 0;
}
