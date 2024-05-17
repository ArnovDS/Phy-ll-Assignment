#include <stdio.h>
#include <math.h>

int main()
{
    double lambda_green = 530e-9, lambda_red = 700e-9;

    double m_green = 3, m_red = 2, theta_0 = 0;

    double PI = 3.1416;

    double theta_3 = 65.0 * PI / 180.0;

    double d = (m_green * lambda_green) / (sin(theta_3) - sin(theta_0));

    double sin_theta_2 = (m_red * lambda_red) / d + sin(theta_0);

    double theta_2 = asin(sin_theta_2) * 180.0 / PI;

    printf("Angle: %.2f degrees\n", theta_2);

    return 0;
}