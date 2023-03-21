#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure declaration
 * @name: meber type of string
 * @owner: membertype of string
 * @age: membertype of float
 * Description: defining the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
