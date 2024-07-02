
#include <stdio.h>

int main() {
    double m1 = 2, m2 = 3, g = 9.8; // Example values
    double force = (2 * m1 * m2) / (m1 + m2) * g;
    printf("force = %f\n", force);
    return 0;
}
