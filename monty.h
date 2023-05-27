#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct file_line_content_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */

typedef struct file_line_content_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  file_line_content_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern file_line_content_t file_line_content;

/* execute.c */
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);

/* add_stack.c */
void add_stack(stack_t **head, unsigned int counter);

/* pint.c */
void function_pint(stack_t **head, unsigned int number);

/* pop.c */
void function_pop(stack_t **head, unsigned int counter);

/* swap.c */
void function_swap(stack_t **head, unsigned int counter);

/* addnode.c */
void addnode(stack_t **head, int n);

/* nop.c */
void function_nop(stack_t **head, unsigned int counter);

/* sub.c */
void function_sub(stack_t **head, unsigned int counter);

/* div.c */
void function_div(stack_t **head, unsigned int counter);

/* mul.c */
void function_mul(stack_t **head, unsigned int counter);

/* mod.c */
void function_mod(stack_t **head, unsigned int counter);

/* pchar.c */
void function_pchar(stack_t **head, unsigned int counter);

/* pstr.c */
void function_pstr(stack_t **head, unsigned int counter);

/* rotl.c */
void function_rotl(stack_t **head, unsigned int counter);

/* rotr,c */
void function_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);

/* stack_queue.c */
void function_queue(stack_t **head, unsigned int counter);
void function_stack(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);

/* pall.c */
void function_pall(stack_t **head, unsigned int number);

/* push.c */
void function_push(stack_t **head, unsigned int number);

/* free_stack.c */
void free_stack(stack_t *head);

/* 
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
 */

#endif
