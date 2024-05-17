#include <stdio.h>

int main()
{
    double m, a1, a2, a3;
    double l1, l2, l3;

    printf("Enter the value of m: ");
    scanf("%lf", &m);

    printf("Enter the value of slit width a1 (in micrometers): ");
    scanf("%lf", &a1);
    printf("Enter the value of slit width a2 (in micrometers): ");
    scanf("%lf", &a2);
    printf("Enter the value of slit width a3 (in micrometers): ");
    scanf("%lf", &a3);

    // Calculate wavelengths for each slit width
    l1 = (m * 1e-3) / a1;
    l2 = (m * 1e-3) / a2;
    l3 = (m * 1e-3) / a3;

    // Check if wavelengths are within valid range
    if ((l1 < 380 || l1 > 750) || (l2 < 380 || l2 > 750) || (l3 < 380 || l3 > 750))
    {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
    }

    // Determine which slit bent the light most
    if (l1 < l2 && l1 < l3)
    {
        printf("Slit 1 bent the light most.\n");
    }
    else if (l2 < l1 && l2 < l3)
    {
        printf("Slit 2 bent the light most.\n");
    }
    else
    {
        printf("Slit 3 bent the light most.\n");
    }

    return 0;
}