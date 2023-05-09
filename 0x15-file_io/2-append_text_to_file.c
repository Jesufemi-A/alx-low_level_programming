#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: file to append text to
 * @text_content: content to append to filename
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int text_length, check_open;
	ssize_t byte_text_write;

	if (filename == NULL)
		return (-1);
	check_open = open(filename, O_WRONLY | O_APPEND);
	if (check_open < 0)
	{
		close(check_open);
		return (-1);
	}
	if (text_content)
	{
		text_length = s_len(text_content);
		byte_text_write = write(check_open, text_content, text_length);
		if (byte_text_write == -1 || byte_text_write != text_length)
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
