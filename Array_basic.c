/******************************************************************************
Write a c program Accept N number of elements in Array and print the Array?
or
Write a c program for elements array?
*******************************************************************************/

#include <stdio.h>

int
main ()
{
    //variable declaration
  int i, n, a[100];

// code for accept N value
  printf ("Enter The Array Size :");
  scanf ("%d", &n);

// code for accept N number of Elelmets in Aarry
  printf ("Enter the Elements : ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
    
    //Code for Print Array Elelmets
  printf ("Elements are : ");
  for (i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }


  return 0;
}

// link : https://onlinegdb.com/L2WWxU-1-
