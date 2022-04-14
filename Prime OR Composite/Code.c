/*
Find whether the number is Prime or composite,
if composite then display its factors
*/
#include <stdio.h>

int main()
{
    int num,c=0,i=2 ;
    printf("enter a integer number:");
    scanf("%d",&num);
   if(num>0)
   {
        for(i=2;i<=num/2;i++)
        {
            if(num % i==0)
            {
            c=1;
            break; 
            }
        } 
    if(num==1)  
        {
        printf("1 is neither prime nor composite");
        } 
    else
        { 
        if(c==0)
        printf("number is prime"); 
        else 
        {
        printf("number is composite\n");
        printf("the factors are:");
        for(i=1;i<=num/2;i++)
            {
                if(num%i==0)
                printf("%d ",i);
            }
        printf("%d ",num);
        }
        }
   }
    else if(num==0)
    printf("0 neither prime nor composite");
    else
    printf("negative numbers are not accepted"); 

    return 0;
}












