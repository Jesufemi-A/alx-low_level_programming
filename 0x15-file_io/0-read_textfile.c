#include "main.h"
/**
 * read_textfile - reads text file and prints it to standard output
 * @filename: file that is being read
 * @letters: number of letteers to be read and printed
 * Return: the number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor;
	ssize_t read_text_file;
	char *middleman;
	ssize_t write_text_file;

	if (filename == NULL)
		return (0);
	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor < 0)
	{
		close(f_descriptor);
		return (0);
	}
	middleman = malloc(sizeof(char) * (letters + 1));

	if (middleman == NULL)
	{
		close(f_descriptor);
		return (0);
	}
	read_text_file = read(f_descriptor, middleman, letters);

	middleman[read_text_file] = '\0';
	if (read_text_file == -1)
	{
		free(middleman);
		close(f_descriptor);
		return (0);
	}
	write_text_file = write(STDOUT_FILENO, middleman, read_text_file);

	if (write_text_file != read_text_file && write_text_file == -1)
	{
		free(middleman);
		close(f_descriptor);
		return (-1);
	}
	free(middleman);
	close(f_descriptor);
	return (read_text_file);
}
