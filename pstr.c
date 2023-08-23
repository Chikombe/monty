#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: pointer to the head of the list
 * @line_number: the file line for execution
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	void line_number;


	if (!stack || !*stack)
	{
		putchar('\n');
		return;
	}

	while (temp)
	{
		if (temp->n == 0)
			break;
		if (!isascii((temp)->n))
			break;
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
}
