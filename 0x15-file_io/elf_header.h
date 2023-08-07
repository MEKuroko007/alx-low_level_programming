#ifndef ELF_H
#define ELF_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define ELF_MAGIC_LEN 4
/*
* Byte - Byte
*/
typedef unsigned char Byte;

/**
 * struct ElfHeader - ELF file header
 * @e_ident: ELF identification
 *
 * Description: Represents the ELF file header. This structure contains
 *              the ELF identification bytes.
 */
typedef struct ElfHeader
{
Byte e_ident[ELF_MAGIC_LEN];
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

#endif /* ESSALHI 0X7 */
