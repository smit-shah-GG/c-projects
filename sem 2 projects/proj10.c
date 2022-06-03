#include<stdio.h>
#include<string.h>

int main(){
    int n, num1 = 1, num2 = 1, num3;
    printf("\n Enter the number of terms: ");
    scanf(" %d", &n);

    printf("\n The terms are: %d \t %d", num1, num2);

    for(int i = 1; i <= n; i++){
        num3 = num2 + num1;
        num1 = num2;
        num2 = num3;
        printf("\t %d", num3);
    }
    return 0;
}