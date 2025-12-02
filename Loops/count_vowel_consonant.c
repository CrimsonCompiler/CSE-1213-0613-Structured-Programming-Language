#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    
    int count = 0;
    
    for(int i = 0; i < 26; i++){
        if(ch == 'a' + i || ch == 'A' + i){
            count++;
        }
    }
    
    if(count == 1){
        printf("Vowel\n");
    }else{
        printf("Consonant\n");
    }
    
    return 0;
}

// using loop