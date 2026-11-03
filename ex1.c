// Exercise 1: Average
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    int number;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }

    printf("%.1f\n", (double)sum / n);

    return 0;
}
