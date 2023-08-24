#include "monty.h"

/**
 * pchar -  prints the char at the top of the stack
 * @stack: pointer to the head of the list
 * @line_number: the file line for execution
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		all_free();
		exit(EXIT_FAILURE);
	}
	if (_isascii((*stack)->n))
	{
		printf("%c\n", (*stack)->n);
		return;
	}
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	all_free();
	exit(EXIT_FAILURE);
}
