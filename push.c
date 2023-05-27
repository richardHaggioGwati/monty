#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void function_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (file_line_content.arg)
	{
		if (file_line_content.arg[0] == '-')
			j++;
		for (; file_line_content.arg[j] != '\0'; j++)
		{
			if (file_line_content.arg[j] > 57 || file_line_content.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(file_line_content.file);
			free(file_line_content.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(file_line_content.file);
		free(file_line_content.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(file_line_content.arg);
	if (file_line_content.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
