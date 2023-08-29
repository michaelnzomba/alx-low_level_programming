#include <stdio.h>

void print_alphabet_x10(void)
{
    char letter;

    int i;
    for (i = 0; i < 10; i++)
    {
        /* The variable letter is now declared */
        letter = 'a';
        while (letter <= 'z')
        {
            putchar(letter);
            letter++;
        }
        putchar('\n');
    }
}
