#include "monty.h"
/**
 * function_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	file_line_content.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
    stack_t *new_node;
    stack_t *current = *head;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        return;
    }
    new_node->n = n;
    new_node->next = NULL;
    if (current == NULL)
    {
        *head = new_node;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }

        current->next = new_node;
        new_node->prev = current;
    }
}

/**
 * f_stack - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	file_line_content.lifi = 0;
}