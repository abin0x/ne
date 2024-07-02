
#include <stdio.h>

int main() {
    int x = 1, y = -2, z = 3, w = -10, s = 20, t = 30;
    x += (y -= (z += (w /= (s %= t))));
    printf("x = %d y = %d z = %d w = %d s = %d t = %d\n", x, y, z, w, s, t);
    t += s *= w %= z /= y /= x;
    printf("x = %d y = %d z = %d w = %d s = %d t = %d\n", x, y, z, w, s, t);
    return 0;
}
