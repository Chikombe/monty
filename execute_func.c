#include "monty.h"

/**
 * execute_func - Calls and executes functions
 * @var: the global variables
 * @opcode: the command to execute
 * Return: none
 */
int execute_func(vars *var, char *opcode)
{
	int i;

	for (i = 0; var->dict[i].opcode; i++)
		if (strcmp(opcode, var->dict[i].opcode) == 0)
		{
			if (!var->dict[i].f)
				return (EXIT_SUCCESS);
		}
	if (strlen(opcode) != 0 && opcode[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				var->line_number, opcode);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
