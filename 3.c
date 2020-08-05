#include <stdio.h>
int main() {
    int firstNumber, secondNumber, sum;

    printf("Enter 2 integers: ");
    scanf("%d %d", &firstNumber, &secondNumber);
    sum = firstNumber + secondNumber;
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

    return 0;
}