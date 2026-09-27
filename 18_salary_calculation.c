#include <stdio.h>
int main()
{
    float basic, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    gross = basic + (basic * 20 / 100) + (basic * 10 / 100);
    printf("Gross Salary = %f", gross);
    return 0;
}
