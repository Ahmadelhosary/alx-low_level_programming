#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a file.
 * @filename: The name of the file to read.
 * @letters: The maximum number of characters to read.
 *
 * Return: The actual number of characters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char buf[1024];
    ssize_t bytesRead;

    if (filename == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL) {
        /* File could not be opened or read */
        return (0);
    }

    bytesRead = fread(buf, sizeof(char), letters, file);
    printf("%s", buf);

    fclose(file);

    return (bytesRead);
}

