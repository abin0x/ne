
#include <stdio.h>

int main() {
    int i = 1, j = 2, k;
    k = (j > 5) ? i : j; 
    printf("k = %d\n", k);
    return 0;
}
