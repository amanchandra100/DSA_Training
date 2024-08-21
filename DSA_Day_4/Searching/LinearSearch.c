#include <stdio.h>

int linearSearch(int arr1[], int n ){
   for (int i = 0; i < 4; i++)
   {
      if (n==arr1[i])
      {
        return i;
        break;
      }
   }
   return -1;
}

void main()
 {
   int n, m=1, size , num;
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
   int a=linearSearch(arr1,n);
  if (a==-1)
  {
    printf("Element not found");
  }
  else
  {
   printf("Element Found at index:%d",a);
  }
  

   

   

}
