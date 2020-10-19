#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: info on dog is saved
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
