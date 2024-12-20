#include <stdio.h>

int main() {
    int a = 15;
    int b = 30;

    printf("Address of variable a: %p\n", (void*)&a);
    printf("Address of variable b: %p\n", (void*)&b);

    return 0;
}
