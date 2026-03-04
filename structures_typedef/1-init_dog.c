#include "dog.h"
#include <stdlib.h>

char *_strdup(char *s);

/**
 * init_dog - initializes a dog struct
 * @d: pointer to dog struct to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = _strdup(name);
d->owner = _strdup(owner);
d->age = age;
}

/**
 * _strdup - create a copy of s.
 * @s: the string to be copied.
 *
 * Return: a pointer to the copy of s, otherwise NULL.
 */
char *_strdup(char *s)
{
char *result;
size_t i, len = 0;

if (s == NULL)
	return (NULL);

while (s[len])
	len++;

result = malloc(len + 1);
if (result == NULL)
	return (NULL);

for (i = 0; i <= len; i++)
	result[i] = s[i];

return (result);
}
