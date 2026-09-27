#include <stdio.h>
int main()
{
    float obtained, total, percentage;
    printf("Enter obtained and total marks: ");
    scanf("%f %f", &obtained, &total);
    percentage = (obtained / total) * 100;
    printf("Percentage = %f", percentage);
    return 0;
}
