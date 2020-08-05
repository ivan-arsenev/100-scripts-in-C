#include <stdio.h>
int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %ld byte\n", sizeof(integerType));
    printf("Size of float: %ld byte\n", sizeof(floatType));
    printf("Size of double: %ld byte\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));
}