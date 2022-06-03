#include <stdio.h>

int main() {
    int num1, num2, flag = 1;
    float res;
    char swvar;
    do
    {
        Label:
        printf("\n Enter the two operands: ");
        scanf("%d %d", &num1, &num2);

        printf("\n Enter the code of the operation you want to undertake.");
        printf("\n Addition : +");
        printf("\n Subtraction : -");
        printf("\n Multiplication : *");
        printf("\n Division : /");
        printf("\n Enter yout choice: ");
        
        scanf(" %c", &swvar);
        
        switch (swvar)
        {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if(num2==0){
                printf("\n Enter valid operands for division.");
                goto Label;
            }
            res = num1 / num2;
            break;
        
        default:
            printf("\n Enter a valid operation.");
            flag = 0;
            break;
        }

    } while (flag == 0);

    printf("\n The resultant value is %g", res);
    
    
    return 0;
}