#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -  function that reads a text file
 * @filename: name of file to open
 * @letters: number of letters to print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int str = open(filename, O_RDONLY);
	ssize_t i, j;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	i = read(str, buffer, letters);
	j = write(STDOUT_FILENO, buffer, i);

	if (str == -1 || i == -1 || j == -1 || j != i)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(str);

	return (j);
}
