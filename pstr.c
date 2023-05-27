#include "monty.h"
/**
 * function_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
    while (h && h->n >= 0 && h->n <= 127 && h->n != '\0')
    {
        printf("%c", h->n);
        h = h->next;
    }
    printf("\n");
}
