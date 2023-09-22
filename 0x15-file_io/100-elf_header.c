#include "main.h"
/**
 * print_error - prints out the error message
 * @message: the error message
 *
 * Return: void
 */
void print_error(const char *message)
{
	fprintf(sdterr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header - prints the elf header file
 * @filename: the header file
 *
 * Return: void
 */
void print_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open file");
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Failed to read ELF header")
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("Magic: %c%c%c%c\n", header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3],
			header.e_ident[EI_MAG0]);
	printf("Class: %d-bit\n", header.e_ident[EI_CLASS] ==
			ELFCLASS32 ? 32 : 64);
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %S\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX System V ABI" : "Unknown");
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", header.e_type == ET_EXEC ? "Executable file" :
			(header.e_type == ET_DYN ? "Shared object file" : "Unknown"));
	printf("Entry point address: 0x%lx\n", header.e_entry);

	close(fd);
}

/**
 * main - displays the info stored in the elf header file
 * @argc: argument count
 * @argv:argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	print_elf_header(argv[1]);
	return (0);
}
