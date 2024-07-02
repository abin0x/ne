
#include <stdio.h>

int main() {
    float x = 0.1, y = -0.1, z;
    z = (y <= 0) ? y : 0; 
    printf("z = %f\n", z);
    return 0;
}
