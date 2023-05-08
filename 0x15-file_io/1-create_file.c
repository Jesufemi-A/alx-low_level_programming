#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be create
 * @text_content: content to be written to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int check_open, text_length;
	ssize_t text_write;

	if (filename == NULL)
		return (-1);
	check_open = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (check_open == -1)
		return (-1);
	if (text_content)
	{
		text_length = s_len(text_content);
		text_write = write(check_open, text_content, text_length);
		if (text_write != text_length || text_write == -1)
		{
			close(check_open);
			return (-1);
		}
	}
	close(check_open);
	return (1);
}

/**
 * s_len - finds length of string
 * @string: input string
 * Return: length of string
 */
int s_len(char *string)
{
	int count, i;

	count = 0;
	for (i = 0; string[i] != '\0'; i++)
		count++;
	return (count);
}



