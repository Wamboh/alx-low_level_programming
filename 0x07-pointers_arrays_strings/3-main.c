#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * _strspn - it gets the lenght of a prefix sub-string
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
