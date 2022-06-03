#include<stdio.h>
#include<string.h>

int countblank(char str[]){
    int ctr = 0;

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' '){
            ctr++;
        }
    }

    return ctr;
}

int countdigit(char str[]){
    int ctr = 0;
    char num[] = "012345678"; 
    
    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j <= 9; j++){
            if(str[i] == num[j]){
                ctr++;
            }
        }
    }

    return ctr;
}

int countvowel(char str[]){
    int ctr = 0;
    char num[] = "aeiou"; 
    
    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j <= 5; j++){
            if(str[i] == num[j]){
                ctr++;
            }
        }
    }

    return ctr;
}

int countconso(char str[]){
    int ctr = 0;
    char num[] = "bcdfghjklmnpqrstvwxyz"; 
    
    for(int i = 0; i < strlen(str); i++){
        for(int j = 0; j <= 21; j++){
            if(str[i] == num[j]){
                ctr++;
            }
        }
    }

    return ctr;
}

int main(){
    char str[100];

    printf("\n Enter the string: ");
    scanf("%[^\n]%*c", &str);

    printf("\n The number of blank spaces are: %d", countblank(str));
    printf("\n The number of digits are: %d", countdigit(str));
    printf("\n The number of vowels are: %d", countvowel(str));
    printf("\n The number of consonants are: %d", countconso(str));
    return 0;

} 
