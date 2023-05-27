#include "monty.h"
/**
 * function_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_swap(stack_t **head, unsigned int counter)
{
stack_t *first = *head;
stack_t *second = first->next;

if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
exit(EXIT_FAILURE);
}
first->next = second->next;
if (second->next != NULL)
second->next->prev = first;
second->prev = NULL;
second->next = first;
first->prev = second;
*head = second;
}
