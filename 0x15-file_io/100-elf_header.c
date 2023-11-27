#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

#define SWAP(a) ((a << 24) | (((a >> 16) << 24) >> 16) | \
(((a << 16) >> 24) << 16) | (a >> 24))

/**
* check- check if file is a ELF
* @el_ify: the identification of ELF bytes
* return: no return
*/

void check(unsigned char *el_ify)
{
	if (*(el_ify) == 0x7f && *(el_ify + 1) == 'E' &&
	    *(el_ify + 2) == 'L' && *(el_ify + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
* guide - prints a guide number
* @el_ify: the identification of ELF bytes
* return: no return
*/

void guide(unsigned char *el_ify)
{
	int b;
	int max_range;

	max_range = EI_NIDENT - 1;
	printf("  Magic:   ");
	for (b = 0; b < max_range; b++)
		printf("%02x ", *(el_ify + b));
	printf("%02x\n", *(el_ify + b));
}

/**
* group - print the ELF class
* @el_ify: the identification of ELF bytes
* return: no return
*/

void group(unsigned char *el_ify)
{
	printf("  Class:                             ");
	if (el_ify[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid\n");
	else if (el_ify[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (el_ify[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", el_ify[EI_CLASS]);
}

/**
* data_t - prints the type of data the ELF file
* @el_ify: the identification of the ELF bytes
* return: no return
*/

void data_t(unsigned char *el_ify)
{
	printf("  Data:                              ");
	if (el_ify[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (el_ify[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (el_ify[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", el_ify[EI_DATA]);
}

/**
* category - print the version of ELF file
* @el_ify: the identification of the ELF bytes
* return: no return
*/

void category(unsigned char *el_ify)
{
	printf("  Version:                           ");
	if (el_ify[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", el_ify[EI_VERSION]);
}

/**
 * osapbii- print the osabi
 * @el_ify: the identification of ELF file
 * return: no return
 */
void osapbii(unsigned char *el_ify)
{
	printf("  OS/ABI:                            ");
	if (el_ify[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (el_ify[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", el_ify[EI_OSABI]);
}

/**
* kind - print the type of the ELF file
* @el_ify: the identification of ELF file
* @et_ype: prints and compare
* return: no return
*/

void kind(unsigned int et_ype, unsigned char *el_ify)
{
	el_ify[EI_DATA] == ELFDATA2MSB ? et_ype = et_ype >> 8 : et_ype;

	printf("  Type:                              ");
	if (et_ype == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (et_ype == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (et_ype == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (et_ype == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (et_ype == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", et_ype);
}

/**
* entry_p - print the entry point address of the ELF
* @el_ify: the identification of ELF file
* @e_ntry: the data to print
* return: no return
*/

void entry_p(unsigned int e_ntry, unsigned char *el_ify)
{
	if (el_ify[EI_DATA] == ELFDATA2MSB)
		e_ntry = SWAP(e_ntry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_ntry);
}

/**
* main - entry point and takes two arguments
* @argc: the no. of args
* @argv: the Args
* section header: contains various infomation about the ELF file
* Return: 0 in success
*/

int main(int argc, char *argv[])
{
	int opener, _goThru, _stop;
	Elf64_Ehdr *file;

	if (argc > 2 || argc < 2)
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);
	file = malloc(sizeof(Elf64_Ehdr));
	if (file == NULL)
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	opener = open(*(argv + 1), O_RDONLY);
	if (opener == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	_goThru = read(opener, file, sizeof(Elf64_Ehdr));
	if (_goThru == -1)
	{
		free(file);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	check(file->e_ident);
	guide(file->e_ident);
	group(file->e_ident);
	data_t(file->e_ident);
	category(file->e_ident);
	osapbii(file->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", file->e_ident[EI_ABIVERSION]);
	kind(file->e_type, file->e_ident);
	entry_p(file->e_entry, file->e_ident);
	free(file);
	_stop = close(opener);
	if (_stop)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}
	return (0);
}
