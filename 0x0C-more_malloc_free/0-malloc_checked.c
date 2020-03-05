#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked  - allocates memory using malloc
 * @b: size of the memoroy b will be need
 *
 */

void *malloc_checked(unsigned int b)
{
	void *pallocate = NULL;

	pallocate = malloc(b);
	if (pallocate == NULL)
	{
		exit(98);
	}

	return (pallocate);
}
