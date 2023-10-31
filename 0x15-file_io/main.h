#ifndef FILE_P
#define FILE_P

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

extern int errno;
ssize_t read_textfile(const char *filename, size_t letters);
int str_len(char *str);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int rdwr2file(int file_from, int file_to, char **av);

#endif
