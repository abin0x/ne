
#include <stdio.h>

int main() {
    int x = 6, y = 2, z = 10, w;
    w = ++x - y++;
    printf("1\\nw = %d x = %d y = %d z = %d\n", w, x, y, z);
    w += x % y + z % --w;
    printf("2\\nw = %d x = %d y = %d z = %d\n", w, x, y, z);
    w = z++ % 2 * y--;
    printf("3\\nw = %d x = %d y = %d z = %d\n", w, x, y, z);
    w += w++ / ++y;
    printf("4\\nw = %d x = %d y = %d z = %d\n", w, x, y, z);
    return 0;
}
