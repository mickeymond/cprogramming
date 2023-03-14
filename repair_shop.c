#include <stdio.h>

int main()
{
    // Declare Variables
    double hoursWorked, costOfParts, totalCharge;

    // Collect User inputs
    printf("Hours worked? ");
    scanf("%lf", &hoursWorked);
    printf("Cost of parts? ");
    scanf("%lf", &costOfParts);

    // Peform Computations
    totalCharge = (hoursWorked * 100) + costOfParts;

    // Display Results To User
    if (totalCharge >= 150)
    {
        printf("Charge for the job: $%.2f\n", totalCharge);
    }
    else
    {
        printf("Charge for the job: $%.2f\n", 150.00);
    }
}