#ifndef GRANDPARENT_H
#define GRANDPARENT_H
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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* GRANDPARENT_H */
