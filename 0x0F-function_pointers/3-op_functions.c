#include "3-calc.h"

/**
 * op_add - addition of two numbers
 * @x:int
 * @y:int
 * Return:result
 */
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - sub x and y
 * @x:int
 * @y:int
 * Return:result
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_div - divide x / y
 * @x:int
 * @y:int
 * Return:result
 */
int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (x / y);
}
/**
 * op_mod - modulo x % y
 * @x:int
 * @y:int
 * Return:result
 */
int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (x % y);
}
/**
 * op_mul - multiply x and y
 *@x:int
 *@y:int
 *Return:result
 */
int op_mul(int x, int y)
{
	return (x * y);
}
