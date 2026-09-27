#include <stdio.h>
int main()
{
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 2)
        isPrime = 0;
    else
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}
