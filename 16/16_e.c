
#include <stdio.h>
#include <math.h>

int main() {
    double a = 5, b = 7, x = M_PI / 4; // Example values
    double side = sqrt(a * a + b * b - 2 * a * b * cos(x));
    printf("side = %f\n", side);
    return 0;
}
