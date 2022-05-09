#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - this structure defines the dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: This is a structure in the header file that sets the
* parameters of the dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - Typedef for struct dog
*/

/**
* typedef struct dog dog_t;
*/

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
