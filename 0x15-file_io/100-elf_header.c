#include "elf_header"
/**
* main - Displays the information contained in the
*        ELF header at the start of an ELF file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s <ELF file>\n", argv[0]);
return (1);
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error");
return (1);
}
ElfHeader *header = malloc(sizeof(ElfHeader));
if (header == NULL)
{
close_elf_file(fd);
perror("Error");
return (1);
}
int read_result = read(fd, header, sizeof(ElfHeader));
if (read_result == -1)
{
free(header);
close_elf_file(fd);
perror("Error");
return (1);
}
check_elf_file(header->e_ident);
printf("ELF Header:\n");
print_elf_magic(header->e_ident);
print_elf_class(header->e_ident);
print_elf_data(header->e_ident);
print_elf_version(header->e_ident);
print_elf_osabi(header->e_ident);
print_elf_abi_version(header->e_ident);
print_elf_type(header->e_type, header->e_ident);
print_elf_entry(header->e_entry, header->e_ident);
free(header);
close_elf_file(fd);
return (0);
}
