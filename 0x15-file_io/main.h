#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/*  Function prototypes */

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int _putchar(char *c);
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
void error_and_exit(int code, const char *message);

#endif /* MAIN_H */
