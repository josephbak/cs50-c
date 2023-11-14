// Pointer
// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int n = 50;
    // // *p is a pointer p and &n is the address of variable n. *p is like pointer p: pointer data type.
    // // declaring a pointer with the type of variable that I want to point at
    // int *p = &n;
    // // deferencing using *: go to the address p is storing
    // printf("%i\n", *p);
    // printf("%p\n", p);

    char *s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("\n");
    printf("%s\n", s);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", s[0]);
    // printf("%c\n", *(s+5000000));

    printf("\n");
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);

}