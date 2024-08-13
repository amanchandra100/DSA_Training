#include <stdio.h>

int main(){
    int i, l;

    int a[5] = {1,2,3,4,5};
    printf("%d\n", a[3]);
    a[3]=10;
    printf("%d\n", a[3]);
    
    l=sizeof(a) / sizeof(a[0]);
    for (i = 0; i < l; i++) {
     printf("%d\n", a[i]);
    } 
    
    return 0;
}