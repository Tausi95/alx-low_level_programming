#include "main.h"


int append_text_to_file(const char *filename, char *text_content)
{
        ssize_t total_bytes;
        int file_descriptor;

        if (!filename)
                return (-1);

        file_descriptor = open(filename, O_WRONLY | O_APPEND);
        if (file_descriptor == -1)
                return (-1);

        if (text_content)
        {
                total_bytes = write(file_descriptor, text_content, _strlen(text_content));
                if (total_bytes == -1)
                {
                        close(file_descriptor);
                        return (-1);
                }
        }

        close(file_descriptor);
        return (1);
}

/**
  * _strlen - length of a string
  * @s: input char
  * Return: length of a string
**/
int _strlen(char *s)
{
        char *ptr = s;
        while (*ptr)
                ptr++;
        return (ptr - s);
}
