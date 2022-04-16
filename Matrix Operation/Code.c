/*
Addition and multiplication operation on matrix
*/
#include <stdio.h>
#include<math.h>
 
int
main ()
{
  int n, m, n1, m1, a[10][10], b[10][10], i, j, k, mult[10][10],choice;
  printf ("enter the choice code 1(addition)2(multiplication):");
  scanf ("%d", &choice);
  if(choice==1||choice==2)
 { printf ("enter the number of rows in mat a:");
  scanf ("%d", &n);
  printf ("enter number of column of mat a:");
  scanf ("%d", &m);
  printf ("enter number of rows in mat b:");
  scanf ("%d", &n1);
  printf ("enter number of columns of mat b:");
  scanf ("%d", &m1);
  
  if(n==n1&&m==m1&&choice==1||m==n1&&choice==2){
      
  printf ("enter matrix a element=\n"); 
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)   
	{
	  printf ("a%d%d:", i + 1, j + 1);
	  scanf ("%d", &a[i][j]);
	}
    }
  printf ("enter matrix b elements:\n");
  for (i = 0; i < n1; i++)
    {
      for (j = 0; j < m1; j++)
	{
	  printf ("b%d%d:", i + 1, j + 1);
	  scanf ("%d", &b[i][j]);
	}
    }
  printf ("matrix a is:");
  for (i = 0; i < n; i++)
    {
      printf ("\n");
      {
	for (j = 0; j < m; j++)
	  printf (" %d", a[i][j]);
      }
    }
  printf ("\nmatrix b is:");
  for (i = 0; i < n1; i++)
    {
      printf ("\n");
      for (j = 0; j < m1; j++)
	{
	  printf (" %d", b[i][j]);
	}
    } 
    if(choice==1&&n==n1&&m==m1)
     {printf("\nthe addition of matrix a and b is:");
    for( i=0;i<n;i++)
   {printf("\n"); 
       for( j=0;j<m;j++)
     
  { printf(" %d",a[i][j]+b[i][j]);} }}
    else if(choice==2&&m==n1)
 { for (i = 0; i < n; i++)
    {
      for (j = 0; j < m1; j++)
	{
	  mult[i][j] = 0;
	  for (k = 0; k < n1; k++)
	    {
	      mult[i][j] = mult[i][j] + (a[i][k] * b[k][j]);

	    }
	}
    }
  printf ("\nthe multiplication is:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m1; j++)
    {
      printf (" %d", mult[i][j]);
      
    }
    printf("\n"); 
  }} else
      goto xyz;
  }
   else
   printf("\nyou have not followed the matrix rule so we cant display your output.");
   
 }
   else
   printf("\nyou had entered wrong choice code.");
  xyz:return 0;
}









