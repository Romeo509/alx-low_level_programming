#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>

#define ERROR_EXIT_CODE 98

/**
* display_elf_header - Displays the information in the ELF header.
* @header: Pointer to the ELF header structure.
*/
void display_elf_header(Elf64_Ehdr *header)
{
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
}
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("HP-UX\n");
break;
default:
printf("<unknown>\n");
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (Unknown)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
}
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (ERROR_EXIT_CODE);
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1) {
fprintf(stderr, "Error: Cannot open file '%s'\n", argv[1]);
return (ERROR_EXIT_CODE);
}
Elf64_Ehdr elf_header;
if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
fprintf(stderr, "Error: Cannot read ELF header\n");
close(fd);
return (ERROR_EXIT_CODE);
}
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return (ERROR_EXIT_CODE);
}
printf("ELF Header:\n");
display_elf_header(&elf_header);
close(fd);
return (0);
}

