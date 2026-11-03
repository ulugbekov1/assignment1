// Exercise 6: Ascending or Descending
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    int n;
    int numbers[1000];
    int ascending = 1;
    int descending = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 1; i < n; i++) {
        if (numbers[i] <= numbers[i - 1]) {
            ascending = 0;
        }
        if (numbers[i] >= numbers[i - 1]) {
            descending = 0;
        }
    }

    if (ascending) {
        printf("ascending sequence\n");
    } else if (descending) {
        printf("descending sequence\n");
    } else {
        printf("neither ascending nor descending sequence\n");
    }

    return 0;
}
