
#include <stdio.h>

int main() 
{
    int x = 1, y = 2, z = 3, w;
    w = x % y + y % x + x % x - z % x - x % z;
    printf("%d\n", w); 

    w = x / z + y / z + (x + y) / z;
    printf("%d\n", w);  

    w = z / y / x + z / y / (y / x);
    printf("%d\n", w); 

    return 0;
}

// this is example
// First printf:
// w = x % y + y % x + x % x - z % x - x % z;
// w = 1 % 2 + 2 % 1 + 1 % 1 - 3 % 1 - 1 % 3;
// w = 1 + 0 + 0 - 0 - 1;
// w = 0;
// Second printf:
// w = x / z + y / z + (x + y) / z;
// w = 1 / 3 + 2 / 3 + (1 + 2) / 3;
// w = 0 + 0 + 1;
// w = 1;
// Third printf:
// w = z / y / x + z / y / (y / x);
// w = 3 / 2 / 1 + 3 / 2 / (2 / 1);
// w = 1 + 0;
// w = 1;