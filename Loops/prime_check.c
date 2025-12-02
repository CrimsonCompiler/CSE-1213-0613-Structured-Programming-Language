#include <stdio.h>

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 1) { 
        printf("Not prime\n"); 
        return 0; 
    }
    
    bool prime = true;
    
    for (int i = 2; i <= (int)sqrt(n); ++i) {
        if (n % i == 0) { 
            prime = false; 
            break; 
        }
    }

    printf(prime ? "Prime\n" : "Not prime\n");

    return 0;
}
