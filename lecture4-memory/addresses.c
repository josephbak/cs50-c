// Pointer
#include <stdio.h>

int main(void)
{
    int n = 50;

    // *p is a pointer p and &n is the address of variable n. *p is like pointer p: pointer data type.
    int *p = &n;
    printf("%p\n", p);
}