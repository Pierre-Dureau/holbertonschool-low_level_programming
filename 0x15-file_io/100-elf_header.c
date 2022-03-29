#include "main.h"

/**
 * exit_msg - print the exit message when an error occured
 *
 * @msg: message to print
 */

void exit_msg(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * is_elf_file - checks if it's an elf file
 *
 * @h: the header structure
 */

void is_elf_file(Elf32_Ehdr *h)
{
	if (h->e_ident[EI_MAG0] == ELFMAG0
		&& h->e_ident[EI_MAG1] == ELFMAG1
		&& h->e_ident[EI_MAG2] == ELFMAG2
		&& h->e_ident[EI_MAG3] == ELFMAG3)
		return;

	exit_msg("Error: The requested file isn't an ELF file");
}

/**
 * print_magic - print_magic
 *
 * @h: the header structure
 */

void print_magic(Elf32_Ehdr *h)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x", h->e_ident[i]);
		if (i != EI_NIDENT)
			printf(" ");
		i++;
	}
	printf("\n");
}

/**
 * print_class - print_class
 *
 * @c: the class
 */

void print_class(unsigned char c)
{
	printf("  Class:                             ");
	if (c == ELFCLASSNONE)
		printf("INVALID");
	else if (c == ELFCLASS32)
		printf("ELF32");
	else if (c == ELFCLASS64)
		printf("ELF64");
	printf("\n");
}

/**
 * print_data - print_data
 *
 * @c: the data
 */

void print_data(unsigned char c)
{
	printf("  Data:                              ");
	if (c == ELFDATANONE)
		printf("INVALID");
	else if (c == ELFDATA2LSB)
		printf("2's complement, little endian");
	else if (c == ELFDATA2MSB)
		printf("2's complement, big endian");
	printf("\n");
}

/**
 * print_version - print_version
 *
 * @c: the version
 */

void print_version(unsigned char c)
{
	printf("  Version:                           ");
	if (c == EV_NONE)
		printf("(invalid)");
	else if (c == EV_CURRENT)
		printf("%d (current)", c);
	printf("\n");
}

/**
 * print_osabi - print_osabi
 *
 * @c: the osabi
 */

void print_osabi(unsigned char c)
{
	printf("  OS/ABI:                            ");
	if (c == ELFOSABI_NONE || c == ELFOSABI_SYSV)
		printf("UNIX - System V");
	else if (c == ELFOSABI_HPUX)
		printf("Unix - HP-UX");
	else if (c == ELFOSABI_NETBSD)
		printf("Unix - NetBSD");
	else if (c == ELFOSABI_LINUX)
		printf("Unix - Linux");
	else if (c == ELFOSABI_SOLARIS)
		printf("Unix - Solaris");
	else if (c == ELFOSABI_IRIX)
		printf("Unix - IRIX");
	else if (c == ELFOSABI_FREEBSD)
		printf("Unix - FreeBSD");
	else if (c == ELFOSABI_TRU64)
		printf("Unix - TRU64 UNIX");
	else if (c == ELFOSABI_ARM)
		printf("Unix - ARM");
	else if (c == ELFOSABI_STANDALONE)
		printf("Unix - Stand-alone");
	printf("\n");
}

/**
 * print_type - print_type
 *
 * @c: the type
 * @be: if big endian 1, else 0
 */

void print_type(unsigned char c, int be)
{
	printf("  Type:                              ");

	if (be == 1)
		c = c >> 8;

	if (c == ET_NONE)
		printf("UNKNOWN (Unknown file)");
	else if (c == ET_REL)
		printf("REL (Relocatable file)");
	else if (c == ET_EXEC)
		printf("EXEC (Executable file)");
	else if (c == ET_DYN)
		printf("DYN (Shared object file)");
	else if (c == ET_CORE)
		printf("CORE (Core file)");
	printf("\n");
}

/**
 * print_entry - print entry
 *
 * @addr: address of the entry point
 * @be: big endian (1 if yes, 0 else)
 */

void print_entry(Elf64_Addr addr, int be)
{
	printf("  Entry point address:               ");

	if (be == 1)
		addr = ((addr >> 24) & 0x000000ff)
		| ((addr >> 8) & 0x0000ff00)
		| ((addr << 8) & 0x00ff0000)
		| ((addr << 24) & 0xff000000);
	printf("%#lx\n", addr);
}

/**
 * print_file - print elf file
 *
 * @h: header
 */

void print_file(Elf32_Ehdr *h)
{
	is_elf_file(h);
	printf("ELF Header:\n");
	print_magic(h);
	print_class(h->e_ident[EI_CLASS]);
	print_data(h->e_ident[EI_DATA]);
	print_version(h->e_ident[EI_VERSION]);
	print_osabi(h->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
		h->e_ident[EI_ABIVERSION]);
	print_type(h->e_type,
			(h->e_ident[EI_DATA] == ELFDATA2MSB) ? 1 : 0);
	print_entry(h->e_entry,
			(h->e_ident[EI_DATA] == ELFDATA2MSB) ? 1 : 0);
}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 *
 * @argc: number of arguments
 * @argv: content of the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	Elf32_Ehdr *header;
	int fd, n = 0;

	if (argc != 2)
		exit_msg("Usage: elf_header elf_filename");

	header = malloc(sizeof(Elf32_Ehdr));
	fd = open(argv[1], O_RDONLY);

	if (header && fd != -1)
	{
		n = read(fd, header, sizeof(Elf32_Ehdr));
		if (n == -1)
			exit_msg("Error: Can't read the header of the requested file");
		print_file(header);
		close(fd);
		free(header);
		return (0);
	}

	exit_msg("Error: Can't open the requested ELF file");
	return (0);
}
