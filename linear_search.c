#include<stdio.h>
int main()
{
    int i;
    int array_size;
    int number;
    int n;
    int count =0;
    
    printf("Enter the Array size ");
    
    scanf("%d",&array_size);
    int array[array_size];
    printf("Enter the Elements in the array: ");
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n The elements are present in the array : ");
    for(i=0;i<array_size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n Which elements find out : \n");
    scanf("%d",&n);
    for(i=0;i<array_size;i++)
    {
        if(n==array[i])
       
       { printf("\n %d is presnt %d position ",n,i+1);
         count=1;
         break;
       } 
      
    }
    
    
    if(count==0)
    {
        printf(" \n %d is not present",n);
    }
      

    return 0;
    
}
