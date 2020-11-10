#include "holberton.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to prin
 * Return: number of printed letters 0 if failed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t size_read, size_write;
	char *buff;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	size_read = read(file_d, buff, letters);
	if (size_read == 1)
	{
		free(buff);
		return (0);
	}
	size_write = write(STDOUT_FILENO, buff, size_read);
	if (size_write == -1)
	{
		free(buff);
		return (0);
	}
	close(file_d);
	free(buff);
	return (size_write);
}
