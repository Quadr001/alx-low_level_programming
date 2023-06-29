#include <stdio.h>

/**
 * main - prints a[2] = 98
 * Return: Always 0
 */
int main(void)
{
	int a[5] = {98, 102, 402, 908, 23};
	int *p;

	p = &a[2];

	printf("a[2] = %d\n", *(p));

	return (0);
}
