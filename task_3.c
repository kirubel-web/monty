#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
*/
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = (*stack)->next;
	(*stack)->next = temp->next;

	if (temp->next != NULL)

	temp->next->prev = *stack;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}
