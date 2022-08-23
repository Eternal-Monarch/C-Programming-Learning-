#include<stdio.h>
int main()
{

        int num,num2,i;
        int num3;
        int count=0;
        int k;

    printf("Enter the size of Array :" );
    scanf("%d",&num);
    int arr[num];
    printf("how much element want to input : ");
    scanf("%d",&num2);
    printf("enter the element into the array : ");
    for(i=0;i<num2;i++)

       {

       scanf("%d",&arr[i]);
       }


   {

    for(int j=0;j<num2;j++)



        printf("the element in the array : %d\n",arr[j]);
        printf("enter which element you want to find : ");
        scanf("%d",&num3);

       {

        for(k=0;k<num2;k++)




             if(arr[k]==num3)


{




        printf("we find the element in the array : %d on location %d \n",arr[k],k+1);
break;}
       }


if(arr[k]!=num3)
    printf("element not found ");










        return 0;


}
}







