#include <stdio.h>
int main()
{
    float a, b, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        result = a + b;
    else if(choice == 2)
        result = a - b;
    else if(choice == 3)
        result = a * b;
    else if(choice == 4)
        result = a / b;
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Result = %f", result);
    return 0;
}
