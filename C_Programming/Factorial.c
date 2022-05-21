// Online C compiler to run C program online
#include <stdio.h>

int Factorial(int num) {
    int i, fact = 1;
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    // Write C code here
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorail of %d = %d\n", num, Factorial(num));
    return 0;
}