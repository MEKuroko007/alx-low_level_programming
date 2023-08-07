#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ELF_MAGIC_LEN 4

typedef unsigned char Byte;

typedef struct {
    Byte e_ident[ELF_MAGIC_LEN];
    // Add other fields from Elf64_Ehdr that you want to use here
} ElfHeader;

void check_elf_file(Byte *e_ident);
void print_elf_magic(Byte *e_ident);
void print_elf_class(Byte *e_ident);
void print_elf_data(Byte *e_ident);
void print_elf_version(Byte *e_ident);
void print_elf_osabi(Byte *e_ident);
void print_elf_abi_version(Byte *e_ident);
void print_elf_type(unsigned int e_type, Byte *e_ident);
void print_elf_entry(unsigned long int e_entry, Byte *e_ident);
void close_elf_file(int fd);
