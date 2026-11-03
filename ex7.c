// Exercise 7: Two Largest Values
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    double value;
    double largest1;
    double largest2;

    printf("Enter n: ");
    scanf("%d", &n);

    scanf("%lf", &value);
    largest1 = value;
    largest2 = value;

    for (int i = 1; i < n; i++) {
        scanf("%lf", &value);

        if (value > largest1) {
            largest2 = largest1;
            largest1 = value;
        } else if (value > largest2) {
            largest2 = value;
        }
    }

    printf("%.2f %.2f\n", largest1, largest2);

    return 0;
}
