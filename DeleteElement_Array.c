/******************************************************************************

                        Write a c Program delete element form array

*******************************************************************************/

#include <stdio.h>

int main()
{
   int array[100],n,i,del_key;
 
 printf("Enter the Arry size: ");
 scanf("%d",&n);
 
 printf("Enter the Elements: ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&array[i]);
 }


// print array
printf("\nArray Elemets are :");

for(i=0;i<n;i++)
 {
     printf(" %d ",array[i]);
 }

printf("\nEnter the postion you want Delete: ");
scanf("%d",&del_key);

//Delete logic
for(i=del_key;i<n-1;i++)
{
    printf("\n %d moved to %d",array[i+1],array[i]);
    array[i]=array[i+1];
    
}

n=n-1;   // decrease n value to n-1. or n--  6 - 1 =5

//print final array after delete
printf("\nArray Elemets After delete are :");

for(i=0;i<n;i++)
 {
     printf(" %d ",array[i]);
 }

    return 0;
}



// link : 
