#include "monty.h"

/**
 * mul - multiplies the second top element of the stack
 * with the top element of the stack.
 * @stack: pointer to the double linked list
 * @line_number: line number of current operation
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		all_free();
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
}
