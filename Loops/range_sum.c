#include <stdio.h>

int main() {
    int range = 100;
    int sum = 0;

    for(int i = 1; i <= range; i++) {
        sum += i;
    }
    
    printf("Sum = %d\n", sum);
    
    return 0;
}