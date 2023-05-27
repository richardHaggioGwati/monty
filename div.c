#include "monty.h"
/**
 * function_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_div(stack_t **head, unsigned int counter)
{
	stack_t *first = *head;
	stack_t *second = first->next;
	int result = second->n / first->n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	if (first->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}
	second->n = result;
	*head = second;
	free(first);
}
