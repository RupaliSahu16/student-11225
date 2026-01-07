// 6.Program to swap two numbers (using variables/pointers)

#include <stdio.h>

void swapUsingPointers(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a = 10, b = 20, temp;
    int x = 30, y = 40;

    printf("Using variables\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n\n", a, b);

    printf("Using pointers\n");
    printf("Before swapping: x = %d, y = %d\n", x, y);

    swapUsingPointers(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

