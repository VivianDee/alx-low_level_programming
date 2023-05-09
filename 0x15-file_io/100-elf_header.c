#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 1024


/**
  * print_error - Print an error message to stderr and exit with status code 98.
  *
  * @message: The error message to print.
  */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}


/**
* get_osabi_name - Get the name of the OS/ABI.
* @osabi: The OS/ABI identifier.
*
* Return: A string containing the name of the OS/ABI.
*/
const char *get_osabi_name(uint8_t osabi)
{
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			return "UNIX - System V";
		case ELFOSABI_HPUX:
			return "UNIX - HP-UX";
		case ELFOSABI_NETBSD:
			return "UNIX - NetBSD";
		case ELFOSABI_LINUX:
			return "UNIX - Linux";
		case ELFOSABI_SOLARIS:
			return "UNIX - Solaris";
		case ELFOSABI_AIX:
			return "UNIX - AIX";
		case ELFOSABI_IRIX:
			return "UNIX - IRIX";
		case ELFOSABI_FREEBSD:
			return "UNIX - FreeBSD";
		case ELFOSABI_TRU64:
			return "UNIX - TRU64";
		case ELFOSABI_MODESTO:
			return "Novell - Modesto";
		case ELFOSABI_OPENBSD:
			return "UNIX - OpenBSD";
		default:
			return "Unknown";
	}
}
/**
  * print_elf_header - Print the information contained in an ELF header.
  *
  * @header: A pointer to the ELF header to print.
  */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %d\n", get_osabi_name(header->e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              EXEC (Executable file)\n");
	printf("  Entry point address:               %#lx\n", header->e_entry);
}


/**
  * main - Entry point
  *
  * @argc: The number of command-line arguments.
  * @argv: An array of strings containing the command-line arguments.
  *
  * Return: 0 on success, or a non-zero value on failure.
  */
int main(int argc, char *argv[])
{
	ssize_t bytes_read;
	Elf64_Ehdr header;
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	if (fd == -1)
	{
		print_error("Could not open file");
	}

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		print_error("Could not read ELF header");
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("File is not an ELF file");
	}

	print_elf_header(&header);

	close(fd);
	return 0;
}
