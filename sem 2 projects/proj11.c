#include<stdio.h>
#include<string.h>

int factorial(int num){
    int facto = 1;
    
    if(num>0){
        for(int i = num; i>=1; i--)
            facto *= i;
    }
    else{
        facto = 1;
    }

    return facto;
}


int ncr(int n, int r){
    int ncrvalue;

    if(n >= r){
        printf("\n %d", factorial(n));
        printf("\n %d", factorial(n-r));
        printf("\n %d", factorial(r));
        ncrvalue = factorial(n)/(factorial(n-r)*factorial(r));
        return ncrvalue;
    }
    else{
        printf("\n Enter valid operands.");
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