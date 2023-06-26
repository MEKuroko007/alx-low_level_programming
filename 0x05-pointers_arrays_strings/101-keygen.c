#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - keygen
 *
 * Return: 0 sucess
 */
int main(void)
{
	char key[84];
	int index = 0, sum = 0, halfOne, halfTwo;

	srand(time(0));

	while (sum < 2772)
	{
		key[index] = 33 + rand() % 94;
		sum += key[index++];
	}

	key[index] = '\0';

	if (sum != 2772)
	{
		halfOne = (sum - 2772) / 2;
		halfTwo = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			halfOne++;

		for (index = 0; key[index]; index++)
		{
			if (key[index] >= (33 + halfOne))
			{
				key[index] -= halfOne;
				break;
			}
		}
		for (index = 0; key[index]; index++)
		{
			if (key[index] >= (33 + halfTwo))
			{
				key[index] -= halfTwo;
				break;
			}
		}
	}

	printf("%s", key);

	return (0);
}