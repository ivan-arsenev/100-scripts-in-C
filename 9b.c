#include <stdio.h>

int main() {
    double A, B, temp;

    printf("Enter A: ");
    scanf("%lf", &A);

    printf("Enter B: ");
    scanf("%lf", &B);

    A = A - B;
    B = A + B;
    A = B - A;

    printf("\nAfter change, A = %.2lf\n", A);
    printf("After change, B = %.2lf", B);

    return 0;
}