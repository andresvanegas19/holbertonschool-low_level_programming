#include <stdio.h>

/**
 * _strpbrk - prints the rest when the pointers will compare
 * @s: the address of array
 * @accept: the string It will compare
 *
 * Return: the rest of the string
 */

char *_strpbrk(char *s, char *accept)
{
char *a = accept;

while (*s)
{
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
a = accept;
s++;
}

return (NULL);
}
