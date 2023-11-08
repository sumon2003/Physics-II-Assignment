#include <stdio.h>
#include <math.h>

int main()
{
    // Declaring variables for m, theta, d, and lambda
    double m, theta, d;
    double lambda;

    // Asking the user to input the values of m, theta, and d
    printf("Enter the value of m : ");
    scanf("%lf", &m);

    printf("Enter the value of theta (degree): ");
    scanf("%lf", &theta);

    printf("Enter the value of d in micro meter: ");
    scanf("%lf", &d);

    // Converting values to SI units and calculate the wavelength (lambda)
    lambda =  (d * 1e-6 * sin(theta * 3.1416 / 180.0)) / (m * 1e-9);

    // Printing the calculated wavelength
    printf("The numeric value of the wavelength is: %.2f nm\n", lambda);

    // Determine the color of the light based on the wavelength range
    if (lambda >= 380 && lambda < 450)
    {
        printf("Color: Violet\n");
    }
    else if (lambda >= 450 && lambda < 485)
    {
        printf("Color: Blue\n");
    }
    else if (lambda >= 485 && lambda < 500)
    {
        printf("Color: Cyan\n");
    }
    else if (lambda >= 500 && lambda < 565)
    {
        printf("Color: Green\n");
    }
    else if (lambda >= 565 && lambda < 590)
    {
        printf("Color: Yellow\n");
    }
    else if (lambda >= 590 && lambda < 625)
    {
        printf("Color: Orange\n");
    }
    else if (lambda >= 625 && lambda <= 750)
    {
        printf("Color: Red\n");
    }
    else
    {
        printf("Color: Unknown\n");
    }

    return 0;
}
