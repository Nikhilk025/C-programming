#include <stdio.h>
int main()
{
    int base, exponent, i, result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for(i = 1; i <= exponent; i++)
        result = result * base;

    printf("Result = %d", result);
    return 0;
}
