/******************************************************************************
Write a c program for bubble sort.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[100],n,i,j,temp,k;
    
    printf("Enter The size of array :");
    scanf("%d",&n);
    
    printf("\nEnter Array Elements :");
    for(i=0;i<n;i++)
    {
        printf("array[%d] :",i);
        scanf("%d",&array[i]);
    }
    
    // print array before Sorting....
    printf("\nBefore Sorting : |");
    for(i=0;i<n;i++)
    {
        printf("%d | ",array[i]);
        
    }
    
    /// main logic bubble sort pass is n-1
    
    for(i=0;i<n-1;i++)  // pass
    {
        for(j=0;j<n-i-1;j++) // sub pass
        {
           if(array[j]>array[j+1]) // assending > for decending <
           {
               temp = array[j];
               array[j] =array[j+1];
               array[j+1]= temp;
           } // if
           
        } //subpass
        
    
    } //pass forloop
    

// After Sort 
 printf("\nAfter Sorting : |");
    for(i=0;i<n;i++)
    {
        printf("%d | ",array[i]);
        
    }



    return 0;
}

// 4 3 2 1 6 7
//   pass1 : 3 4 2 1 6 7
//           3 2 4 1 6 7
//           3 2 1 4 6 7
//           3 2 1 4 6 7

// pass2 : 3 2 1 4 6 7
        //   2 3 1 4 6 7


// pass3

// pass4

// pass5





//  1 2 3 4 5 6 7









