#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_context);
int append_text_to_file(const char *filename, char *text_context);
void errorMsg(int code, char *msg, const char *filename);
int close_fd(int fd);

#endif /*MAIN_H*/
