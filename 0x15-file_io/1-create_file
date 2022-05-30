#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define SUCCESS 1
#define FAIL -1
/**
 * create_file - create a file
 * @filename: filename to use
 * @text_content: content of file
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writeCount = 0;
	char *buffer;
	unsigned int i = 0;

	if (filename == NULL)
		return (FAIL);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd == -1)
			return (FAIL);
		close(fd);
		return (SUCCESS);
	}
	buffer = malloc(i * sizeof(char));
	if (buffer == NULL)
		return (FAIL);
	for (i = 0; text_content[i]; i++)
		buffer[i] = text_content[i];
	buffer[i] = '\0';
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		free(buffer);
		return (FAIL);
	}
	writeCount = write(fd, buffer, i);
	if (writeCount == -1)
	{
		free(buffer);
		close(fd);
		return (FAIL);
	}
	close(fd);
	free(buffer);
	return (SUCCESS);
}
