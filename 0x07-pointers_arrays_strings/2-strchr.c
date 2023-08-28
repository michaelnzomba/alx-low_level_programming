#include <stdio.h>

int main(void)
{
    char str[] = "Hello, ALX School!";
    char *result = _strchr(str, 'A');

    if (result != NULL) {
        printf("Character found at position: %ld\n", result - str);
    } else {
        printf("Character not found\n");
    }

    return 0;
}
