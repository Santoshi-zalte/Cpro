/******************************************************************************

Write A C Program For Insert array Element any Index location?

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[100],n,i,pos,value;
    
    printf("\nEnter the size of array");
    scanf("%d",&n);
    
    printf("\nEnter the Array Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    // print array Element 
        printf("\n The Array Elements are : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",array[i]);
    }
    
   // Insert Element 
   printf("\nEnter The index no where you want Insert Element: ");
   scanf("%d",&pos);
   
   printf("\n Enter The Element/value : ");
   scanf("%d",&value);
   
   
   // insert logic
   
   for(i=n;i>pos;i--)
   {
       array[i]=array[i-1];
   }
   
   array[pos]=value;
   
   n=n+1;
   
   
   // print array Element 
        printf("\n The Array Elements after insert are : ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",array[i]);
    }

// printf("\nn vlaue is %d",n);

    return 0;
}
