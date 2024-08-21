#include <stdio.h>

void main()
 {
   int arr2[4];
   int arr1[4]={10,20,30,40};
   for (int i = 0; i < 4; i++)
   {
      arr2[i]=arr1[4-i-1];
   }
   for (int i = 0; i < 4; i++)
   {
      printf("%d\n",arr2[i]);
   }
   

}



//Importent question
//copy all the element into another array in reverse order
//find the address of any element in any arry