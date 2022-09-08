#include<stdio.h>
int main()
{
        int i,number,target;
        int sum;
        int count =0;
        int low,high;
        int middle;
        printf("Enter the array size : ");
        scanf("%d",&number);
        int array[number];
        printf("Enter the elements into the array : ");
        for(i=0; i<number; i++)
        {
            scanf("%d",&array[i]);

        }
        printf("the element in the array is : ");
        for(i=0; i<number; i++)
        printf("%d ",array[i]);
        printf("\n");
        printf("target : ");
        scanf("%d",&target);
        for(i=0;i<number;i++)
        {

             sum=array[i]+array[i+1];
            if(sum==target)
            {
                count = count+i;

            }



}
printf(" arr[%d] arr[%d] ",count,count+1);
return 0;
}
