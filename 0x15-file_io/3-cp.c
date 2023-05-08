#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_err - function to print errors
 * @err: error to print
 * @filename: file associated with error
 * Return: void
 */
void print_err(const char *err, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", err, filename);
}
/**
 * close_file - close fd
 * @fd: file descriptor
 * Return: void
 */
void close_file(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		print_err("Can't close fd", "");
		exit(100);
	}
}
/**
 * copy - a function that copies the content of a file to another file
 * @src: source file
 * @dest: sink
 * Return: void
 */
void copy(const char *src, const char *dest)
{
	char buffer[BUFFER_SIZE];
	ssize_t i, j;
	int to, from = open(src, O_RDONLY);

	if (from == -1)
	{
		print_err("Can't read from file", src);
		exit(98);
	}
	to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		print_err("Can't write to", dest);
		close_file(from);
		exit(99);
	}
	while ((i = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		j = write(to, buffer, i);
		if (j == -1)
		{
			print_err("Can't write to", dest);
			close_file(from);
			close_file(to);
			exit(99);
		}
	}
	if (i == -1)
	{
		print_err("Can't read from file", src);
		close_file(from);
		close_file(to);
		exit(98);
	}
	close_file(from);
	close_file(to);
}
/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments to main
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp src dest\n");
		exit(97);
	}
	copy(argv[1], argv[2]);
	return (0);
}
