#include "monty.h"
/**
 * f_pint - Function to print the top element of a stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the top element of the stack
 * at the given line number.
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
