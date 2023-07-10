#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char buffer[letters];
    FILE *file;
    ssize_t bytesRead;
    ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);


	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead == 0 || ferror(file))
	{
		fclose(file);
		return (0);
	}

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWritten != bytesRead)
	{
		fclose(file);
		return (0);
	}

	fclose(file);
	return (bytesRead);
}
