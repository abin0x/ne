
#include <stdio.h>
#include <math.h>

int main() {
    double a = 3, b = 4, c = 5; // Example values
    double s = (a + b + c) / 2;
    double tri_area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("tri-area = %f\n", tri_area);
    return 0;
}
