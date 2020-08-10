#include <stdio.h>

int main() {
    double A, B, temp;

    printf("Enter A: ");
    scanf("%lf", &A);

    printf("Enter B: ");
    scanf("%lf", &B);

    // value of A gives to temp
    temp = A;

    // value of B assigned to A
    A = B;

    // Value of temp assigned to B
    B = temp;

    printf("\nAfter change, A = %.2lf\n", A);
    printf("After change, B = %.2lf", B);

    return 0;
}