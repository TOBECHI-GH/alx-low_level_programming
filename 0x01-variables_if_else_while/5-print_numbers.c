#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 10
 * How can characters accept numbers as value
 * Return: 0
 */
int main(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
