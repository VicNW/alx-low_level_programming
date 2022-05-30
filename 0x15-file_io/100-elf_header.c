#include <stdio.h>
# include <stdint.h>
# define ELF_NIDENT16
/*http://wiki.osdev.org/ELF_Tutorial*/
typedef struct {
	uint8_te_ident[ELF_NIDENT];
	Elf32_Halfe_type;
	Elf32_Halfe_machine;
	Elf32_Worde_version;
	Elf32_Addre_entry;
	Elf32_Offe_phoff;
	Elf32_Offe_shoff;
	Elf32_Worde_flags;
	Elf32_Halfe_ehsize;
	Elf32_Halfe_phentsize;
	Elf32_Halfe_phnum;
	Elf32_Halfe_shentsize;
	Elf32_Halfe_shnum;
	Elf32_Halfe_shstrndx;
} Elf32_Ehdr;

enum Elf_Ident {
	EI_MAG0= 0, // 0x7F
	EI_MAG1= 1, // 'E'
	EI_MAG2= 2, // 'L'
	EI_MAG3= 3, // 'F'
	EI_CLASS= 4, // Architecture (32/64)
	EI_DATA= 5, // Byte Order
	EI_VERSION= 6, // ELF Version
	EI_OSABI= 7, // OS Specific
	EI_ABIVERSION= 8, // OS Specific
	EI_PAD= 9  // Padding
};

# define ELFMAG00x7F // e_ident[EI_MAG0]
# define ELFMAG1'E'  // e_ident[EI_MAG1]
# define ELFMAG2'L'  // e_ident[EI_MAG2]
# define ELFMAG3'F'  // e_ident[EI_MAG3]

# define ELFDATA2LSB(1)  // Little Endian
# define ELFCLASS32(1)  // 32-bit Architecture
typedef uint16_t Elf32_Half;/* Unsigned half int*/
typedef uint32_t Elf32_Off;/* Unsigned offset*/
typedef uint32_t Elf32_Addr;/* Unsigned address*/
typedef uint32_t Elf32_Word;/* Unsigned int*/
typedef int32_t  Elf32_Sword;/* Signed int*/

/**
 * main - read ELF Header info
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(stderr, "Not an ELF file or error in reading\n", 36);
		exit(98);
	}

	return (0);
}
