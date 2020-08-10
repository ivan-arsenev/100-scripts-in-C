#include <stdio.h>

// How long works - increase size of variable in declaration
int main()
{
    int a;
    long b;
    long long c;

    double e;
    long double f;


    printf("Size of int: %ld byte\n", sizeof(a));
    printf("Size of long: %ld byte\n", sizeof(b));
    printf("Size of long long: %ld byte\n", sizeof(c));

    printf("Size of double: %ld byte\n", sizeof(e));
    printf("Size of long double: %ld byte\n", sizeof(f));

    return 0;
}