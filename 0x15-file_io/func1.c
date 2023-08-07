#include "elf_header"
/**
* check_elf_file - Checks if a file is an ELF file.
* @e_ident: A pointer to an array containing the ELF magic numbers.
*/
void check_elf_file(Byte *e_ident)
{
if (e_ident[0] != 0x7F || e_ident[1] != 'E' ||
e_ident[2] != 'L' || e_ident[3] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
/**
* print_elf_magic - Prints the magic numbers of an ELF header.
* @e_ident: A pointer to an array containing the ELF magic numbers.
*/
void print_elf_magic(Byte *e_ident)
{
printf("  Magic:   ");
for (int i = 0; i < ELF_MAGIC_LEN; i++)
{
printf("%02x", e_ident[i]);
if (i == ELF_MAGIC_LEN - 1)
printf("\n");
else
printf(" ");
}
}
/**
* print_elf_class - Prints the class of an ELF header.
* @e_ident: A pointer to an array containing the ELF class.
*/
void print_elf_class(Byte *e_ident)
{
printf("  Class:                             ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
break;
}
}
/**
* print_elf_data - Prints the data of an ELF header.
* @e_ident: A pointer to an array containing the ELF class.
*/
void print_elf_data(Byte *e_ident)
{
printf("  Data:                              ");
switch (e_ident[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_DATA]);
break;
}
}
/**
* print_elf_version - Prints the version of an ELF header.
* @e_ident: A pointer to an array containing the ELF version.
*/
void print_elf_version(Byte *e_ident)
{
printf("  Version:                           %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
