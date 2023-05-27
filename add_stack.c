#include "monty.h"
/**
 * add_stack - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void add_stack(stack_t **head, unsigned int counter)
{
if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
exit(EXIT_FAILURE);
}

(*head)->next->n += (*head)->n;
*head = (*head)->next;
free((*head)->prev);
(*head)->prev = NULL;
}
