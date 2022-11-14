#include "dog.h"

/**
 * _strlen - find the length of string
 * @str: string
 * Return: returns length of string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str)
		length++;

	return (length);
}

/**
 * _strcpy - copies string into dest variable
 * @dest: buffer storing string
 * @src: buffer storing string to copy
 * Return: returns copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: returns NULL in case of failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);

	return (doggie);
}
