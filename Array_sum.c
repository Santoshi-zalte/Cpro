/******************************************************************************

Write a c program for sum of array?

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int
main ()
{
    //variable declaration
  int i, n, a[100],sum=0;    //here sum for store the array addition

// code for accept N value
  printf ("Enter The Array Size :");
  scanf ("%d", &n);

// code for accept N number of Elelmets in Aarry
  printf ("Enter the Elements : ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
    
    // sum of array logic
    // sum = sum + a[0]. .. sum= sum+a[1]. .... sum =sum+ a[n];
  for (i = 0; i < n; i++)
    {
      sum=sum+a[i];
    }

//print array sum
   printf("Array Sum = %d",sum);

  return 0;
}

// Output:

/*
Enter The Array Size :5
Enter the Elements : 1
2
3
4
5
Array Sum = 15
*/

