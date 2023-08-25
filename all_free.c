#include "monty.h"

/**
 * all_free - free all program mallocs
 * Return: none
 */
void all_free(void)
{
	if (var.buff != NULL)
		free(var.buff);
	if (var.file_name != NULL)
		fclose(var.file_name);
	if (var.head != NULL)
	{
		while (var.head->next != NULL)
		{
			var.head = var.head->next;
			free(var.head->prev);
		}
		free(var.head);
	}
}
