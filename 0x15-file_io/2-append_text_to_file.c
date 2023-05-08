#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - function to add text to file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int i;
	int l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l] != '\0')
			l++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	i = write(file, text_content, l);
	if (i == -1 || file == -1)
		return (-1);

	close(file);
	return (1);
}

