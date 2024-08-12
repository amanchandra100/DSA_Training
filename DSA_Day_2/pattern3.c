#include <stdio.h>

void main()
 {
    for ( int i = 1; i <=5; i++)
    {

        for (int j =1 ; j <= i; j++)
        {
            if (i==j || i==5 || j==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
        

        
    }
    
}