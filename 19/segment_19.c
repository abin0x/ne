
#include <stdio.h>

int main() {
    int x, y, z;
    printf("1\\nx = %d\n", x = (y = 2 * (z = 12 / 10)) % 5);
    printf("2\\nx = %d\n", z = (x > y) % (z = 2 * (x + 5)));
    printf("3\\nx = %d\n", z = 2 * (x = (z % y) * (x = 3 * (z = 10 % (x = 3 * (y = 12 / (z = 5)))))));
    return 0;
}
