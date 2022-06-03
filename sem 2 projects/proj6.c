#include <stdio.h>

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

int main() {
    float prod = 1.0;
    for(int j = 1; j <= 7; j++){
        prod = prod * j/factorial(j);
    }

    printf(" %g", prod);

    return 0;
}