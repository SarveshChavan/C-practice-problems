/*
Finding the max number among given numbers(2,3,4)
*/

#include <stdio.h>
#include<conio.h>

int
main ()
{
  int num1, num2, num3, num4, max, a;
  printf ("enter the no among 2,3,4:");
  scanf ("%d", &a);
  if (a == 2)
    {
      printf ("\nenter two numbers:");
      scanf ("%d%d", &num1, &num2);
      max = (num1 > num2) ? num1 : num2;
      printf ("\nthe greatest number is %d ", max);
    }
  else if (a == 3)
    {
      printf ("\nenter three numbers:");
      scanf ("%d%d%d", &num1, &num2, &num3);
      max =
	((num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3);
      printf ("\nthe greatest number is %d", max);
    }
  else if (a == 4)
    {
      printf ("\nenter four numbers:");
      scanf ("%d%d%d%d", &num1, &num2, &num3, &num4);
      max =
	((num1 > num2 && num1 > num3 && num1 > num4) ? num1 : (num2 > num3
							       && num2 >
							       num4) ? num2
	 : (num3 > num4) ? num3 : num4);
      printf ("\nthe greatest number is %d", max);
    }
  else
    {
      printf ("invalid output.");
    }
  return 0;

}

