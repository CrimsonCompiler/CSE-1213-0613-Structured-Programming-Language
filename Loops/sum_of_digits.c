#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    
    while(n > 0){
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    
    printf("Sum of digits = %d\n", sum);
    
    return 0;
}