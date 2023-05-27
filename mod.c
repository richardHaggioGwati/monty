#include "monty.h"
/**
 * function_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_mod(stack_t **head, unsigned int counter)
{
	stack_t *first = *head;
	stack_t *second = first->next;
	int result = second->n % first->n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(file_line_content.file);
		free(file_line_content.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (first->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(file_line_content.file);
		free(file_line_content.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	second->n = result;

	*head = second;
	free(first);
}
