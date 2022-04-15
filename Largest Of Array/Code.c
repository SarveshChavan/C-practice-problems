/*
Find the largest element of array
*/
#include <stdio.h>

int main()
{
    int n,arr[100],i,large;
    printf("enter array size"); 
    scanf("%d",&n); 
    printf("enter array numbers:") ;
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    for(i=0;i<n;i++)
   {  
   if(arr[0]<arr[i])
  {  arr[0]=arr[i];}}
  printf("%d is largest",arr[0]); 
    

    return 0;
}


