#include <stdio.h>

void pattern(int n){
    for ( int i = 1; i <=n; i++){
        for (int j = 1 ; j < i; j++){    
             printf("  ");
        }
        for (int k =  n; k >= i; k--){
                printf("%d ", n-i+1);
            }
        printf("\n");        
    }
}

int main(){
    int n;
    printf("\nEnter the number of rows : ");
    scanf("%d", &n);
    pattern(n);

    return 0;
}