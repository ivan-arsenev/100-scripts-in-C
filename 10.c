#include <stdio.h>

int main() {
    int number;

    printf("Enter integer");
    scanf("%d", &number);

    if (number % 2 == 0) printf("%d - even\n", number);
    else printf("%d - odd", number);
    return 0;
}