// Exercise 4: ASCII Table
// See README.md for the task.

#include <stdio.h>

int main(void)
{
    for (char ch = 'a'; ch <= 'z'; ch++) {
        char upper = ch - 'a' + 'A';
        printf("'%c' %d   '%c' %d\n", ch, ch, upper, upper);
    }

    return 0;
}
