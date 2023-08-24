#include "monty.h"

vars var;

/**
 * main - a program that implements a Monty interpreter
 * @argc: the number of arguments
 * @argv: pointer to array of arguments
 * Return: on success 0, otherwise 1
 */
int main(int argc, char **argv)
{
	char *opcode;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
			return (EXIT_FAILURE);
	}

	if (var_init(&var) != 0)
		return (EXIT_FAILURE);

	var.file_name = fopen(argv[1], "r");
	if (!var.file_name)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		all_free();
		return (EXIT_FAILURE);
	}

	while (getline(&var.buff, &var.temp, var.file_name) != EOF)
	{
		opcode = strtok(var.buff, " r\t\n");
		if (opcode != NULL)
			if (execute_func(&var, opcode) == EXIT_FAILURE)
			{
				all_free();
				return (EXIT_FAILURE);
			}
		var.line_number++;
	}

	all_free();

	return (EXIT_SUCCESS);
}
