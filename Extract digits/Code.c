/*
Extract the last N digits of a given 10 digit account number. 
*/
#include <stdio.h>
#include <math.h>
 
int main()
{
    int ac_num,last_num=0,i,t,ac,count=0;
    printf("enter account number \naccount number upto 2147483647:");
    scanf("%d",&ac_num);
    printf("give number of last digits you want:");
    scanf("%d",&t);
    ac=ac_num; 
    while(ac_num!=0)
    {
      ac_num=ac_num/10;
      count++; }
    if(count==10&&t<=count)
    {
        printf("last numbers are:"); 
     for(i=9;i>=0;--i)
        {
        last_num=ac/pow(10,i);
        ac=ac-(last_num*pow(10,i)); 
        if(i<t)
        printf(" %d",last_num);
        }
    }
    else
    {
      printf("you entered wrong input"); }
        
        

    return 0;
}








