#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int rev = 0;
    int temp = n;
    
    while(temp > 0){
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    
    if(n == rev){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}