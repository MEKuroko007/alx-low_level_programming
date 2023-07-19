#include "3-calc.h"

/**
 * op_add - addition of two numbers
 * @a:int
 * @b:int
 * Return:result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub a and b
 * @a:int
 * @b:int
 * Return:result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplb a and b
 *@a:int
 *@b:int
 *Return:result
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 * op_div - divide a / b
 * @a:int
 * @b:int
 * Return:result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		eait(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo a % b
 * @a:int
 * @b:int
 * Return:result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		eait(100);
	}
	return (a % b);
}
