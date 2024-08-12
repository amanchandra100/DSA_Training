#include <stdio.h>

void main()
{
    int elage = 18;
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if ( age >= elage)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible");
    }
    
}