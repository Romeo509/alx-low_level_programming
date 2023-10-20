#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <elf.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_elf(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void great_learning(unsigned char *e_ident);
void print_data(unsigned  char *e_ident);
void print_version(unsigned char *e_ident);
void ready_all(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
#endif /* MAIN_H */

