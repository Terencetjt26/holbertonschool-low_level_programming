#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* Function prototype */
ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int _putchar(char c);

void close_file(int fd);

void print_error(int exit_code, const char *format, const char *arg);

void copy_file(const char *file_from, const char *file_to);


#endif /* MAIN_H */
