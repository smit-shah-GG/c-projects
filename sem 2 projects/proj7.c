#include <stdio.h>
#include<string.h>

int main() {
    int num, sum = 0;
    printf("\n Enter the number: ");
    scanf(" %d", &num);

    char numstr[50];
    sprintf(numstr, "%d", num);
    
    printf("\n %s is the original number.", numstr);
    printf("\n After reversing string is %s",strrev(numstr));

    for(int i = 0; i < strlen(numstr); i++){
        sum += numstr[i] - '0';
    }

    printf("\n The sum of the digits is %d", sum);

    return 0;
}