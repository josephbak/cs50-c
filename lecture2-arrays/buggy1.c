#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

int get_negative_int(void)
{
    // declaration
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    // while (n < 0);
    while (n >= 0);
    return n;
}