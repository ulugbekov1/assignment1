// Exercise 5: Greatest Common Divisor
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int x, y;
    int a, b, r;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    a = x > y ? x : y;
    b = x > y ? y : x;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("%d\n", a);

    return 0;
}
