#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;

    while (*s) {
        if (strchr(accept, *s)) {
            count++;
            s++;
        } else {
            break;
        }
    }

    return count;
}

