#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    string s = "HI!";
    string t = "BYE!";
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    printf("%s\n", s);
    printf("%c %c %c %c\n", s[0], s[1], s[2], s[3]);
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
    printf("%s\n", t);

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);

    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}