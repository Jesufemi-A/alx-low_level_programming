#include "main.h"

/**
 * read_textfile - reads a text file and standard output it
 * @filename: file to be read from
 * @letters: number of byte to read
 * Return: num of bytes read and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_byte_read, num_byte_write;
	char *read_buffer;
	int check_open;

	if (filename == NULL)
		return (0);

	check_open = open(filename, O_RDONLY);
	if (check_open < 0)
	{
		close(check_open);
		return (0);
	}
	read_buffer = malloc(sizeof(char) * letters + 1);
	if (read_buffer == NULL)
		return (0);
	num_byte_read = read(check_open, read_buffer, letters);
	if (num_byte_read == -1)
	{
		close(check_open);
		free(read_buffer);
		return (0);
	}
	if (num_byte_read > -1)
		read_buffer[num_byte_read] = '\0';
	num_byte_write = write(STDOUT_FILENO, read_buffer, num_byte_read);
	if (num_byte_write != num_byte_read || num_byte_write == -1)
	{
		free(read_buffer);
		close(check_open);
		return (0);
	}
	free(read_buffer);
	close(check_open);
	return (num_byte_write);
}
