#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers base 16 in lowercase (hexadecimal)
 * How can characters accept numbers as value
 * Return: 0
 */
int main(void)
{
int i;
for (i = '0'; i <= '15'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
