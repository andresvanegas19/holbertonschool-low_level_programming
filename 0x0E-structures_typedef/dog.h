#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
 *Is the struct of dog and dates
 *@name: dog name's
 *@owner: dog owner's
 *@age: dog age's
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
