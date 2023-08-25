#include "monty.h"
#include <string.h>

/**
 * execute_func - Calls and executes functions
 * @var: the global variables
 * @opcode: the command to execute
 * Return: none
 */
int execute_func(vars *var, char *opcode)
{
	int i = 0;
	int arrlen = 0;

	instruction_t ptr[] = {
		{ "pall", pall}, { "push", push }, { "pint", pint },
		{"pop", pop}, {"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub},
		 { "div", divi }, {"mul", mul}, {"mod", mod}, {"pchar", pchar }, {"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},{"stack", stack}, {"queue", queue}
	};

	arrlen = sizeof(ptr) / sizeof(ptr[0]);
	while (ptr[i].opcode && i < arrlen)
	{
		if (strcmp(opcode, ptr[i].opcode) == 0)
		{
			ptr[i].f(&var->head, var->line_number);
			return (EXIT_SUCCESS);
		}
		i++;
	}

	if (strlen(opcode) != 0 && opcode[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
				var->line_number, opcode);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

