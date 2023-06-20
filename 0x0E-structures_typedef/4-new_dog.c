#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
int l1, l2, i, j;


ndog = (dog_t *)malloc(sizeof(dog_t));

if (ndog == NULL)
return (NULL);

while (name[l1] != '\0')
l1++;
while (owner[l2] != '\0')
l2++;

ndog->name = (char *)malloc((l1 + 1) * sizeof(char));
  if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
ndog->owner = (char *)malloc((l2 + 1) * sizeof(char));
if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
for (i = 0; i < l1; i++)
ndog->name[i] = name[i];
ndog->name[i] = '\0';

for (j = 0; j < l2; j++)
ndog->owner[j] = owner[j];
ndog->owner[j] = '\0';

ndog->age = age;

return (ndog);
}
