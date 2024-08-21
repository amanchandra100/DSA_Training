#include <stdio.h>

void main()
 {
   int arr2[3][3];
   int arr1[3][3]={{10,20,30},{40,50,60},{70,80,90}};
   for (int i = 0; i < 4; i++)
   {
    for (int j = 0; j < 4; j++)
   {
      arr2[i][j]=arr1[3-i-1][3-j-1];
   }
   }
   
   for (int i = 0; i < 3; i++)
   {
    for (int j = 0; j < 3; j++)
   { 
       printf("%d\n",arr2[i][j]);
   }
   }
   

   

}
