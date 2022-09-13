#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints the first 100 fibonacci numbers below 100 , followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 100)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 99)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
