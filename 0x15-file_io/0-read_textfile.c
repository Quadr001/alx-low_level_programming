#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - Read text file and print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w - actual number of bytes read and printed,
* 0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
char *buf;
ssize_t fd, w, t;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (0);
}
buf = malloc(sizeof(char) * letters);
if (!buf)
{
perror("Error allocating memory");
close(fd);
return (0);
}
t = read(fd, buf, letters);
if (t == -1)
{
perror("Error reading file");
free(buf);
close(fd);
return (0);
}
w = write(STDOUT_FILENO, buf, t);
if (w == -1)
{
perror("Error writing to STDOUT");
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (w);
}
