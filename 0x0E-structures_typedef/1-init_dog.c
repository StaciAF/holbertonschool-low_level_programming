#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable initialized
 *
 * @name: variable for dog name
 *
 * @age: variable for dog's age
 *
 * @owner: variable for owner's name
 *
 * Description: function initializes a struct type variable
 * Return: voind - in main
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
