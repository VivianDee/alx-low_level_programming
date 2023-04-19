#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - A function that creates a copy of a dog using structure "dog"
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Pointer p
 * - NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i = 0, j = 0;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->age = age;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	p->name = malloc(sizeof(char) * (i + 1));
	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (j + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	strncpy(p->name, name, i);
	strncpy(p->owner, owner, j);
	p->name[i] = '\0';
	p->owner[j] = '\0';

	return (p);
}
