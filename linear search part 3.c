#include<stdio.h>
int main()
{
int i,j,search,number;
int findelement;
printf("enter the size of array : ");
scanf("%d",&number);
int array[number];
printf("enter the element in the array : ");
for(i=0;i<number;i++)
    {
scanf("%d",&array[i]);
    }
printf("which element you want to find out : ");
scanf("%d",&findelement);
{
    for(i=0;i<number;i++)
    if(findelement==array[i])
{

    printf("we find the element %d on the location : %d",array[i],i+1);
    break;
}
}
if(findelement!=array[i])



    printf("element is not found on the location\n");

return 0;


}

