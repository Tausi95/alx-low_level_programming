#include "main.h"
/**
* read_textfile - check the code for Holberton School students.
* @filename: file to read and write
* @letters: number of letters to read and write.
* Return: letters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t total_letters, bytes_written;
        int file_descriptor;
        char *buffer;

        if (!filename)
                return (0);

        buffer = malloc(sizeof(char) * (letters + 1));
        if (buffer == NULL)
                return (0);

        file_descriptor = open(filename, O_RDONLY);
        if (file_descriptor == -1)
        {
                free(buffer);
                return (0);
        }

        total_letters = read(file_descriptor, buffer, sizeof(char) * letters);
        if (total_letters == -1)
        {
                free(buffer);
                close(file_descriptor);
                return (0);
        }


        bytes_written = write(STDOUT_FILENO, buffer, total_letters);
        if (bytes_written == -1)
        {
                free(buffer);
                close(file_descriptor);
                return (0);
        }

        free(buffer);
        close(file_descriptor);
        return (bytes_written);
}
