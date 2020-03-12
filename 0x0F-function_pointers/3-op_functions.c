#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add -  a + b.
 * @a:integer varable
 * @b:integer variable
 * Return: Sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b.
 * @a: integer vatiable
 * @b: integer variable
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op-mul - a * b.
 * @a:integer variable
 * @b:ineteger variable
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a/b.
 * @a: integer variable
 * @b: inetger variable
 * Return: quotient.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a % b.
 * @a: integer variable
 * @b: integer variable
 * Return: mod.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
