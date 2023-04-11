#include "main.h"
/**
 * create_file - a function that create a file
 * @filename: the name of the file
 * @text_content: the content to write into the file
 * @Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_descriptor;
	int index;
	int write_text_file;

	index = 0;
	if (filename == NULL)
		return (-1);
	f_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (f_descriptor < 0)
	{
		close(f_descriptor);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(f_descriptor);
		return (0);
	}
	while (text_content[index] != '\0')
		index++;
	write_text_file = write(f_descriptor, text_content, index);
	close(f_descriptor);
	if (index != write_text_file)
		return (-1);
	return (1);
}
