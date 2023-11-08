#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main()
{
    // Given parameters for the first light source
    double m1 = 3.0;            // Order of the first bright spot
    double lambda1 = 530e-9;    // Wavelength of the first light in meters
    double theta1 = 65.0;       // Angle of incidence in degrees

    // Given parameters for the second light source
    double m2 = 2.0;            // Order of the second bright spot
    double lambda2 = 700e-9;    // Wavelength of the second light in meters

    // Variables for the distance between slits and the resulting angle
    double d, theta2;          

    // Convert theta1 to radians
    theta1 = theta1 * PI / 180.0;

    // Calculating the distance between slits using the formula for diffraction grating
    d = m1 * lambda1 / sin(theta1);
    printf("Distance between slits (d): %.9f meters\n", d);   // Print the value of d

    // Calculating the angle for the second-order bright spot using the inverse sine function
    theta2 = asin(m2 * lambda2 / d);
    theta2 = theta2 * 180.0 / PI; // Convert theta2 back to degrees

    printf("The second-order bright spot for red light will be at %.2f degrees.\n", theta2); // Print the result

    return 0;
}
