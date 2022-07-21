#include<stdio.h>

void incr();

int main() {
    for(int i = 0; i < 3; i++) {
        incr();
    }
    return 0;
}

void incr() {
    static int i=0;
    int a = 5;
    printf("\nAutomatic: %d \nStatic: %d\n", a++, i++);
}