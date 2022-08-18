#include<stdio.h>
int main()
{

    int num1,num2,rcm,i,temp,temp1,temp2,temp3,rev,sum;
    printf("enter a number :\n");
    scanf("%d",&num1);
    //given input 123
temp=num1%10;//3
sum=temp;//3
temp2=num1/10;//12
rcm=temp2/10;//1
temp3=temp2%10;//2
//printf("%d %d %d\n",sum,temp3,rcm);
rev=sum+temp+rcm;
//printf("%d\n",rev);
if(rev==(rcm+temp3+sum))
    printf("palimdrome\n");
else
    printf("not palimdrome\n");







    return 0;
}
