#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: The name of the dog and the first member of structure
* @age: The age of the dog and the second member of the structure
* @owner: The owner of the do and the third member
* Description: This structure defines a dog with its name, age, and owner.
*/
struct dog
{
char *name;
float age;
char *owner;
};
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
