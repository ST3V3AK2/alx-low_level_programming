/**
 * op_add - computes the sum two numbers
 * @a: first number
 * @b: second number
 * 
 * Return: sum
*/

int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: first number
 * @b: second number
 * 
 * Return: difference between a and b
*/

int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - computes the product two numbers
 * @a: first number
 * @b: second number
 * 
 * Return: product of a and b
*/

int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first number
 * @b: second number
 * 
 * Return: division of a by b
*/

int op_div(int a, int b)
{
    if (b == 0)
    {
        print("Error\n");
        return(100);
    }
    return (x / y);
}

/**
 * op_mod - computes the remainder of a divided by b
 * @a: first number
 * @b: second number
 * 
 * Return: a mod b
*/

int op_mod(int a, int b)
{
    if (b == 0)
    {
        print("Error\n");
        return(100);
    }
    return (x % y);
}