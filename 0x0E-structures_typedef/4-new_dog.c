#include "dog.h"

/**
 * _strlen - find the length of string
 * @str: string
 * Return: returns length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * _strcpy - copies string into dest variable
 * @dest: buffer storing string
 * @src: buffer storing string to copy
 * Return: returns copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';
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
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		doggie = malloc(sizeof(dog_t));
		if (doggie == NULL)
			return (NULL);

		doggie->name = malloc(sizeof(char) * name_len);
		if (doggie->name == NULL)
		{
			free(doggie);
			return (NULL);
		}

		doggie->owner = malloc(sizeof(char) * owner_len);
		if (doggie->owner == NULL)
		{
			free(doggie->name);
			free(doggie);
			return (NULL);
		}

		doggie->name = _strcpy(doggie->name, name);
		doggie->age = age;
		doggie->owner = _strcpy(doggie->owner, owner);
	}

	return (doggie);
}
