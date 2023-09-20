#include "monty.h"
/**
 * f_pop - Function to print the top element of a stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the top element of the stack
 * at the given line number.
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
