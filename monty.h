#ifndef MONTY_H
#define MONTY_H
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * struct stack_s - Structure representing a doubly linked
 * list node for a stack or queue
 * @n: An integer data element stored in the node
 * @prev: A pointer to the previous node in the stack or queue
 * @next: A pointer to the next node in the stack or queue
 *
 * Description:This structure defines a node for implementing
 * a doubly linked list,which can be used to represent either a
 * stack (LIFO) or a queue (FIFO) in Holberton project.
 */
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - Structure for carrying values and context
 * in the program
 * @arg: The value associated with the bus
 * @file: A pointer to the Monty file
 * @content: The content of a line
 * @lifi: A flag for changing between stack and queue mode
 *
 * Description: This structure is used to carry values and context
 * throughout the program, facilitating operations in the Monty language.
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
 * struct instruction_s - Structure to hold an opcode and
 * its associated function
 * @opcode: The opcode string
 * @f: A pointer to the function that handles the opcode
 *
 * Description: This structure associates an opcode string with
 * the function that implements the corresponding operation for
 * stack, queue, LIFO, FIFO in the Holberton project.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
#endif
