#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing acceptable characters
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int length = 0;
    int found;

    while (*s) {
        found = 0;

        for (char *a = accept; *a; a++) {
            if (*s == *a) {
                length++;
                found = 1;
                break;
            }
        }

        if (!found) {
            break;
        }

        s++;
    }

    return length;
}
