#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a[5] = {0, 1, 2, 3, 4};
int *p;

p = &a[2];

/* Add your code below this line */
printf("a[2] = %d\n", *(p + 0));
/* Add your code above this line */

a[2] = 98;
	
printf("%d\n", a[2]);
return (0);
}
