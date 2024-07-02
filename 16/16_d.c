
#include <stdio.h>
#include <math.h>

int main() {
    double a = 1, b = -3, c = 2; // Example values
    double discriminant = b * b - 4 * a * c;
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    printf("x1 = %f\n", x1);
    return 0;
}
