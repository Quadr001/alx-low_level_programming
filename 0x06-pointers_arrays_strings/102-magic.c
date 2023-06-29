#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: 0 on success
*/
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;

/*
*Your line of code
*/
*(p + 5) = 98;

printf("a[2] = %d\n", *(int *)((char *)p + 20)); /* Print the value of a[2] */

return (0);
}
