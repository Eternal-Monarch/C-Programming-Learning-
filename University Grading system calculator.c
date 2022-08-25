#include<stdio.h>
int main()
{
    int i;
    double storecredit=0;
    float sgpa[100];
    double credit[100];
    int semesternumber;
    double temp=0;
double formulastore=0;
printf("Grade System \n");
    printf("Enter the total semester :");
    scanf("%d",&semesternumber);
    for(i=0;i<semesternumber;i++)
    {

        printf("Enter the %d semester SGPA : ",i+1 );
        scanf("%f",&sgpa[i]);
        printf("Enter the %d semester credit : ",i+1 );
        scanf("%d",&credit[i]);
        storecredit=(credit[i]+storecredit);
        temp=(float)storecredit;

    }
     for(i=0;i<semesternumber;i++)
     {
    double formula=sgpa[i]*credit[i];
    formulastore=formulastore+formula;
     }
    double result=formulastore/storecredit;
    printf("The CGPA is : %f ",(result));

return 0;
}
