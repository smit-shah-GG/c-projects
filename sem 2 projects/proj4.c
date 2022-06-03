#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float dsq = 0, root1, root2;
    
    printf("\n Enter the co-efficients of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("\n The equation entered is %d x^2 + %d x + %d = 0 ", a, b, c);
    
    if(b * b < 4 * a * c){
        printf("\n The given equation has no roots.");
    }
    else{
        root1 = (-b + sqrt(b * b - 4 * a * c))/(2*a);
        root2 = (-b - sqrt(b * b - 4* a * c))/(2*a);
        printf("\n The given equation has real roots. They are %g and %g.", root1, root2);
    }
}