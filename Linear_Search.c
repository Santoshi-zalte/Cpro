/******************************************************************************

Write a C program for Linear / sequencial search ?

*******************************************************************************/

#include <stdio.h>

int main()
{
    // here key (search key)
    int Array[100],n,i,key;  
    
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    
    printf("\nEnter the array Elements : ");
    for(i=0;i<n;i++)
    {
        printf("\nArray[%d]: ",i);
        scanf("%d",&Array[i]);
    }
    
    // here print array elements if you want
    printf("\nElements are: ");
     for(i=0;i<n;i++)
    {
        printf(" %d ",Array[i]);
    }
    
    printf("\nEnter the Number you want Search :");
    scanf("%d",&key);
    
    // Logic here 
    for(i=0;i<n;i++)
    {
        if(Array[i]==key)
        {
           printf("Elemnet %d found in index %d",key,i);
           return 0;
        }
    }
    
    printf("Elemnet %d not found",key);

    return 0;
}
