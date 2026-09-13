#include <stdio.h>

int main() {
    int a = 10;
    int b = 25;
    int c = 15;

    if (a >= b && a >= c) {
        printf("%d is the largest", a);
    } 
    else if (b >= a && b >= c) {
        printf("%d is the largest", b);
    } 
    else {
        printf("%d is the largest", c);
    }

    return 0;
}
