#ifndef DOG_H
#define DOG_H

<<<<<<< HEAD

/**
* struct dog - a dog's basic info
=======
/**
 * struct dog - a dog's basic info
>>>>>>> 7a98068decfbba9eb2e219d95036ef8517ca6795
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: Longer description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

<<<<<<< HEAD

=======
>>>>>>> 7a98068decfbba9eb2e219d95036ef8517ca6795
/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
