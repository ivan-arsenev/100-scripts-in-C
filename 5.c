#include "stdio.h"

// use %d for int
// use %c for char

int main() {
    char c;

    printf("Enter a char ");
    scanf("%c", &c);

    printf("in ASCII: %c = %d\n", c, c);

    return 0;
}

