#ifndef MONTY_H
#define MONTY_H
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
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
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
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push_(stack_t **h, unsigned int number);
void pall_(stack_t **h, unsigned int number);
void pint_(stack_t **h, unsigned int number);
int execute_(char *content, stack_t **h, unsigned int counter, FILE *file);
void free_stack(stack_t *h);
void pop_(stack_t **h, unsigned int counter);
void swap_(stack_t **h, unsigned int counter);
void add_(stack_t **h, unsigned int counter);
void nop_(stack_t **h, unsigned int counter);
void sub_(stack_t **h, unsigned int counter);
void div_(stack_t **h, unsigned int counter);
void mul_(stack_t **h, unsigned int counter);
void mod_(stack_t **h, unsigned int counter);
void pchar_(stack_t **h, unsigned int counter);
void pstr_(stack_t **h, unsigned int counter);
void addnode_(stack_t **h, int n);
void addqueue_(stack_t **h, int n);



#endif
