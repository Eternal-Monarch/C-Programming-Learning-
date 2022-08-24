#include<stdio.h>
int main()
{
    int i,array1[5]={1,2,3,4,5};
    int array2[5]={6,7,8,9,10};
    int array3[10];
    int j;
    int count=0;
    for(i=0;i<5;i++)
    {
    array3[count]=array1[i];
count++;

    }
    for(j=0;j<5;j++)
    {
        array3[count]=array2[j];
count++;
    }
for(i=0;i<10;i++)
{
    printf("%d ",array3[i]);
}


return 0;
}
