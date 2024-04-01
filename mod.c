#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void f_modulus(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length;
	int AUX;

	length = 0;

	h = *head;
	while (h)
	{
		h = h->next;
		length;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	AUX->n % h->n;
	h->next->n = AUX;
	*head = h->next;
	free(h);
}
