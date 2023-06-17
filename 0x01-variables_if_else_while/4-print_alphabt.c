#include <stdio.h>
/**
 * Declare a variable and initialize it with the first member of the range [a - z]
 * 
 * Result: Always 0 (Success)
 */
int main(void)
{
 
    char alphabet = 'a';

    while (alphabet <= 'z')
    {
        putchar(alphabet);
        alphabet++;
    }

    putchar('\n');
    return (0);
}

