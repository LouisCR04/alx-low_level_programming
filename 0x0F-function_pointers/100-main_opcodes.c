#include <stdlib.h>
#include <stdio.h>
#include <udis86.h>

/**
 *main - entry
 *@argc: No of arguments from terminal
 *@argv: Arguments from terminal
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	ud_t ud_obj;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ud_unit(&ud_obj);
	ud_set_input_buffer(&ud_obj, argv[1], atoi(argv[1]));
	ud_set_mode(&ud_obj, 64);
	ud_set_syntax(&ud_obj, UD_SYN_INTEL);

	while (ud_disassemble(&ud_obj))
		printf("\t%s\n", ud_insn_hex(&ud_obj));
	return (0);
}
