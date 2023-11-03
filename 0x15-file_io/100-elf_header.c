#include <elf.h>
#include "main.h"
/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 || e_ident[EI_MAG1] != ELFMAG1 ||
	    e_ident[EI_MAG2] != ELFMAG2 || e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * print_field - Prints a field name and its value.
 * @name: The name of the field.
 * @value: The value of the field.
 */
void print_field(const char *name, unsigned char value)
{
	printf(" %s: %02x\n", name, value);
}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <ELF file>\n", argv[0]);
		return 1;
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
		return 98;
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
		fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
		close(fd);
		return 98;
	}

	check_elf(header.e_ident);

	printf("ELF Header:\n");
	print_field("Magic", header.e_ident[EI_MAG0]);
	print_field("Class", header.e_ident[EI_CLASS]);
	print_field("Data", header.e_ident[EI_DATA]);
	print_field("Version", header.e_ident[EI_VERSION]);
	print_field("OS/ABI", header.e_ident[EI_OSABI]);
	print_field("ABI Version", header.e_ident[EI_ABIVERSION]);
	print_field("Type", header.e_type);
	print_field("Entry point address", header.e_entry);

	close(fd);
	return 0;
}
