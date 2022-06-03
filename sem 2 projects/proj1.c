#include <stdio.h>

int main() {
    int p, n, r;
    printf("\n Enter the Principal amount, Number of years and Rate of interest: ");
    scanf("%d %d %d", &p, &n,&r);
    
    float interest = (p*n*r)/100;
    printf("\n The interest generated is %f", interest);
    return 0;
}