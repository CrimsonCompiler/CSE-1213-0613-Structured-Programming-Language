#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}   

int main(){

    int n;
    scanf("%d", &n);
    
    int sum = 0;
    int temp = n;
    
    while(temp > 0){
        int rem = temp % 10;
        sum += factorial(rem);
        temp = temp / 10;
    }
    
    if(n == sum){
        printf("Strong number\n");
    }else{
        printf("Not strong number\n");
    }
    
    return 0;
}

    //1) Strong number চেক

    // n = 145 → 1! + 4! + 5! = 145