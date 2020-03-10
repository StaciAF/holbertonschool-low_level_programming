#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees previously malloced dog structs
 * @d: pointer to dog struct
 *
 * Description: frees dog structs
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
