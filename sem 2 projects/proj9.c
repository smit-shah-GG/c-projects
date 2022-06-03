#include<stdio.h>
#include<string.h>

int main(){
    int num, sum = 0;
    char numstr[50];

    printf("\n Enter the number: ");
    scanf(" %d", &num);

    sprintf(numstr, "%d", num);

    for(int i = 0; i < strlen(numstr); i++){
        sum += (numstr[i] - '0')*(numstr[i] - '0')*(numstr[i] - '0');
    }

    if(sum == num){
        printf("\n The entered number %d is an Armstrong Number.", num);
    }
    else{
        printf("\n The entered number %d is not an Armstrong Number.", num);
    }

    return 0;
}