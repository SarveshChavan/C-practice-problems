/*
Problem statement:
Calculate HRA,TA,GROSS SALARY, TAX,NET SALARY
given that 
HRA=10 percent of basic salary (user input)
TA=5 percent of basic salary
GROSS SALARY=basic salary +HRA+TA
tax to be given=2 percent of gross salary
output (net salary) =GROSS SALARY - tax
*/

#include<stdio.h> 
#include<conio.h>
#include<math.h>
int main()
{

float basic_sal,HRA,TA,gross_sal,tax,net_sal; //declaring variables
printf("\n enter the basic sal:");            //taking user input
scanf("%f",&basic_sal);
HRA=0.1*basic_sal;
TA=0.05*basic_sal;
gross_sal=basic_sal+HRA+TA;
tax=0.02*gross_sal;
net_sal=gross_sal-tax;             //calculating required output

//desplaying calculated output
printf("\n the HRA is =%f",HRA);
printf("\n the TA is =%f",TA);
printf("\n the GROSS SAL is =%f",gross_sal);
printf("\n the tax is =%f",tax);
printf("\n the net sal is =%f",net_sal);
return 0;

}






