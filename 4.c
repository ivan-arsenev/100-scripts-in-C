#include <stdio.h>

int main() {
    double firstNumber, secondNumber, product;

    printf("Enter 2 integers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    product = firstNumber * secondNumber;

    printf("Product = %.2lf\n", product);
}