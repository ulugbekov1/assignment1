// Exercise 3: Sum of Positives and Negatives
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int value;
    int positiveSum = 0;
    int negativeSum = 0;

    do {
        scanf("%d", &value);

        if (value > 0) {
            positiveSum += value;
        } else if (value < 0) {
            negativeSum += value;
        }
    } while (value != 0);

    printf("%d\n%d\n", positiveSum, negativeSum);

    return 0;
}
