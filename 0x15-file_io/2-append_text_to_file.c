#include "main.h"
/**
 * append_text_to_file - append some texts to a file
 * @filename: the pointer to the buffer
 * @text_content: the text content to be added
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_descriptor;
	int middle_byte;
	int byte_num;

	byte_num = 0;
	if (filename == NULL)
		return (-1);
	f_descriptor = open(filename, O_APPEND | O_WRONLY);

	if (f_descriptor < 0)
	{
		close(f_descriptor);
		return (-1);
	}
	if (text_content == NULL)
		return (0);
	while (text_content[byte_num] != '\0')
		byte_num++;
	middle_byte = write(f_descriptor, text_content, byte_num);
	if (middle_byte != byte_num || middle_byte < 0)
	{
		close(f_descriptor);
		return (-1);
	}
	close(f_descriptor);
	return (1);
}



