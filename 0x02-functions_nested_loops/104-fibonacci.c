#include <stdio.h>

/**
 * fibLength - Calculate the number of digits in a Fibonacci number
 *
 * @num: The Fibonacci number
 *
 * Return: The number of digits in the Fibonacci number
 */
int fibLength(int num)
{
    int length = 0;

    if (!num)
        return (1);

    while (num)
    {
        num = num / 10;
        length += 1;
    }

    return (length);
}

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count, initial0s;
    unsigned long fib1 = 1, fib2 = 2, sum, max = 100000000, fib1Overflow = 0, fib2Overflow = 0, sumOverflow = 0;

    printf("%lu, %lu", fib1, fib2);

    for (count = 3; count <= 98; ++count)
    {
        if (fib1Overflow > 0)
            printf("%lu", fib1Overflow);
        initial0s = fibLength(max) - 1 - fibLength(fib1);

        while (fib1Overflow > 0 && initial0s > 0)
        {
            printf("%d", 0);
            --initial0s;
        }

        printf("%lu", fib1);

        sum = (fib1 + fib2) % max;
        sumOverflow = fib1Overflow + fib2Overflow + (fib1 + fib2) / max;
        fib1 = fib2;
        fib1Overflow = fib2Overflow;
        fib2 = sum;
        fib2Overflow = sumOverflow;

        if (count != 98)
            printf(", ");
        else
            printf("\n");
    }

    return (0);
}
