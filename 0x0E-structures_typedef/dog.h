#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
 * struct dog - data of the dog
 *@name: dog name's
 *@owner: dog owner's
 *@age: dog age's
 *
 * Description: into the struct save the charcaters of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
