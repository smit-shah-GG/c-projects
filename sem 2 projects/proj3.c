#include <stdio.h>

int main() {
    int year, flag = 0;
    
    printf("\n Enter the year: ");
    scanf("%d", &year);

    if(year % 100 == 0){
        if(year %  400 == 0){
            printf("\n The year is a leap year");
            flag = 1;
        }
        else{
            printf("\n The year is not a leap year");
            flag = 1;
        }
    }

    if(flag != 1){
        if(year % 4 == 0){
            printf("\n The year is a leap year");
        }
        else{
            printf("\n The year is not a leap year");
        }
    }

}