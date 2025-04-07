#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* Function prototype */
ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
