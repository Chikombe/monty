#include "monty.h"

/**
 * var_init - initializing variables
 * @var: global variables to initialize
 * Return: on success 0, otherwise 1
 */
int var_init(vars *var)
{
	var->file_name = NULL;
	var->buff = NULL;
	var->temp = 0;
	var->dict = create_new_func();
	if (var->dict == NULL)
		return (EXIT_FAILURE);
	var->head = NULL;
	var->line_number = 1;
	var->MODE = 0;

	return (EXIT_SUCCESS);
}
