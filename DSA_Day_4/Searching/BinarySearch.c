#include <stdio.h>

int BinarySearch(int arr1[], int s, int e, int n ){
   int mid=(s+e)/2;
   if (s>e)
   {
    return -1;
   }
   
   if (n==arr1[mid])
   {
      return mid;
   }
   else if (arr1[mid]<n)
   {
        s=mid+1;
        return BinarySearch(arr1,s,e,n);
        
   }
   else
   {
        e=mid-1;
        return BinarySearch(arr1,s,e,n);
   }
 

}

void main()
 {
   int n, e,s, m=1,size,num;
   printf("Enter size of array:");
   scanf("%d",&size);
   int arr1[size];
   for (int i = 0; i < size; i++)
   {
     printf("Enter Element of Array:");
     scanf("%d",&num);
     arr1[i]=num;
   }
   
   printf("Enter the no to search:");
   scanf("%d",&n);
   e=size-1;
   s=0;
   int a=BinarySearch(arr1,s,e,n);
   if (a==-1)
   {
    printf("Element not found");
   }
   else
   {
   printf("Element Found at index:%d",a);
   }
   

   

   

}
