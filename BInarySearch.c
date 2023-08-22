/******************************************************************************

Binary search program

*******************************************************************************/

#include <stdio.h>

int main()
{
     int array[100],n,key,low,high,mid,i;
    
    printf("\nEnter the size of array(Sorted):");
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
    
    printf("\nEnter The Number you want search:");
    scanf("%d",&key);
    
    // main logic
    low =0;      //first index
    high=n-1;   // last index
    
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(array[mid]==key)
        {
            printf("\nNumber %d found at location %d",key,mid);
            return 0;
        }
        
        if(key>array[mid])
        {
            low = mid+1;
        }
       else{
            high=mid-1;
        }
        
    } //while end
    
   
    printf("Number %d Not Found",key);
    
    return 0;
}




//3	7	12	15	20	46
