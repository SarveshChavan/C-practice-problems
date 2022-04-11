/*
Calculator for two operand arithmatic operations 
supported operations:Addition, Substraction, Multiplication, Division, Power, Factorial 
*/
#include <stdio.h>
#include <math.h>
 
int main()
{
    char function;
    float num1,num2;
    int num3,fact=1,i=1;
    printf("enter the function(+,-,*,/,power(p),fact(f):");
    scanf("%c",&function);
    if(function=='f')
    {
     
        printf("enter a number whose factorial you want to find:");
        scanf("%d",&num3);
           }
    if(function=='+'||function=='-'||function=='*'||function=='/'||function=='p')
    {printf("enter two number num1,num2:");
    scanf("%f%f",&num1,&num2); }
    
    switch(function)
    { 
        case '+':
        printf("the sum of %f and %f is %f",num1,num2,num1+num2);
        break;
        case '-':
        printf("the subtraction of %f and %f is %f",num1,num2,num1-num2);
        break;
         case '*':
        printf("the multiplication of %f and %f is %f",num1,num2,num1*num2);
        break;
         case '/':
        printf("the division of %f and %f is %f",num1,num2,num1/num2);
        break;
        case 'p':
        if(num1==0&&num2==0)
        printf("math error");
        else
        printf("the power of %f raise to %f is %f",num1,num2,pow(num1,num2));
        break;
        case 'f':
         {
        for(i;i<=num3;i++)
        {
            fact=fact*i;
            
        }
        printf("the factorial is %d:",fact); }  
        break;
        default:
        printf("invalid function");
    }
    return 0;
}








