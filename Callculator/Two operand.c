/*
Calculator for two operand arithmatic operations 
supported operations:Addition, Substraction, Multiplication, Division, Power, Factorial 
*/
#include <stdio.h>
#include <math.h>
 #include <conio.h>
int main()
{
    int function;
    float num1,num2;
    int num3,fact=1,i=1;
    while(1)
    {
    printf("\nenter the function(1)+,(2)-,(3)*,(4)/,(5)power,(6)fact ,(0)quit:");
    scanf("%d",&function);
    if(function==6)
    {
     
        printf("enter a number whose factorial you want to find:");
        scanf("%d",&num3);
           }
    if(function==1||function==2||function==3||function==4||function==5)
    {printf("enter two number num1,num2:");
    scanf("%f%f",&num1,&num2); }
    
    switch(function)
    { 
        case 1:
        printf("the sum of %f and %f is %f",num1,num2,num1+num2);
        break;
        case 2:
        printf("the subtraction of %f and %f is %f",num1,num2,num1-num2);
        break;
         case 3:
        printf("the multiplication of %f and %f is %f",num1,num2,num1*num2);
        break;
         case 4:
        printf("the division of %f and %f is %f",num1,num2,num1/num2);
        break;
        case 5:
        if(num1==0&&num2==0)
        printf("math error");
        else
        printf("the power of %f raise to %f is %f",num1,num2,pow(num1,num2));
        break;
        case 6:
         {
        for(i;i<=num3;i++)
        {
            fact=fact*i;
            
        }
        printf("the factorial is %d:",fact); }  
        break;
        default:
        printf("invalid function");
        case 0:
        return 0;
        break;
    }
    getch();
    }
    return 0;
}








