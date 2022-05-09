#ifndef _DOG_H_
#define _DOG_H_

void init_dog(struct dog *d, char *name, float age, char *owner);

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

#endif /* _DOG_H_ */
