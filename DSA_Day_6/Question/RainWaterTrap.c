#include <stdio.h>
#include <math.h>


int water(int a[],int l){
    int min;
    // l = sizeof(a) / sizeof(a[0]);
    int left[l];
    int right[l];
    left[0] = a[0];
    right[l - 1] = a[l-1];
    int total=0;

    for (int i = 1; i < l; i++)
    {
        left[i] = fmax(left[i - 1], a[i]);
    }
    for (int i = l - 2; i >=0; i--)
    {
        right[i] = fmax(right[i + 1], a[i]);
    }
    for (int i = 0; i < l; i++)
    {
        total=total + (fmin(left[i],right[i]))-a[i];
    }

      //print Array
    for (int i = 0; i < l; i++)
    {
        printf("%d ", left[i]);
    }
    printf("\n");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", right[i]);
    }

    return total;

  
    
}

void main()
{
    int total, l;
     int a1[] = {3, 1, 0, 2, 3, 1, 2, 4, 3, 1, 2};
    // int a1[]={3,0,4,2,1};
    l = sizeof(a1) / sizeof(a1[0]);
    total=water(a1,l);
    printf("\n%d",total);
 
    
    

//print Array
    // for (int i = 0; i < l; i++)
    // {
    //     printf("%d ", left[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < l; i++)
    // {
    //     printf("%d ", right[i]);
    // }
    
    // printf("\n%d",total);
}