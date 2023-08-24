#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to double linked list
 * @line_number: the file line for execution
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;
	(*stack)->next->prev = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack) = (*stack)->next;
	tmp->next->next = NULL;
	tmp->next->prev = tmp;
}

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to double linked list
 * @line_number: file line for execution
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	temp = *stack;
	while (temp->next)
		temp = temp->next;

	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;

	(*stack)->prev = temp;
	*stack = temp;

}

/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: pointer to double linked list
 * @line_number: file line for execution
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 0;
}

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @stack: pointer to double linked list
 * @line_number: file line for execution
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	(void) stack;

	var.MODE = 1;
}
