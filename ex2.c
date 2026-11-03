// Exercise 2: Harmonic Series
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    double harmonic = 0.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        harmonic += 1.0 / i;
    }

    printf("%.2f\n", harmonic);

    return 0;
}
