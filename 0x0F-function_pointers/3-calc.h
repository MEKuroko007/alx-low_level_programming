#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int x, int y);
int op_sub(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int op_mul(int x, int y);
int (*get_op_func(char *s))(int, int);

#endif
