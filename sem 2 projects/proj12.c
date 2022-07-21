/*SMIT SHAH 60003210180 FE IT D1*/

#include<stdio.h>
#include<string.h>

int factorial(int num){
    int i, facto = 1;
    i = num;

    if(i >= 1){
        facto = num * factorial(num - 1);
        i--;
    }
    else{
        return facto;
    }
}


int ncr(int n, int r){
    int ncrvalue;

    if(n >= r){
        ncrvalue = factorial(n)/(factorial(n-r)*factorial(r));
        return ncrvalue;
    }
    else{
        printf("\n Enter valid operands.");
        return 0;
    }
}

int main(){
    int n, r, res;
    printf("\n Enter the numbers: ");
    scanf(" %d %d", &n, &r);

    res = ncr(n,r);

    printf("\n The valueof nCr is: %d", res);

    return 0;
}
