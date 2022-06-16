#include <stdio.h>

int main(){
    int x = 40;
    int y = 10;

    printf("%d + %d = %d", x, y, add(x, y));
    printf("%d - %d = %d", x, y, sub(x, y));
    printf("%d * %d = %d", x, y, mul(x, y));
    printf("%d / %d = %d", x, y, div(x, y));
    printf("%d mod %d = %d", x, y, mod(x, y));

    return 0;
}