#include "monty.h"
/**
  *function_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void function_sub(stack_t **head, unsigned int counter)
{
stack_t *first = *head;
stack_t *second = first->next;
int result = second->n - first->n;

if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
exit(EXIT_FAILURE);
}

second->n = result;

*head = second;
free(first);
}
