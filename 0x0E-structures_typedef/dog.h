#ifndef DOG_H
#define DOG_H
/**
 * struct dog - details about a dog
 * @name: dog's name
 *
 * @owner: owner's name
 *
 * @age: dog's age
 *
 * Description: Struct built for details about a dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
/* more function prototypes*/
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
