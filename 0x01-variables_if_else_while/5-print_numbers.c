#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
int single;
for (single = 0; single < 10; single++)
{
putchar(single);
}
putchar('\n');
return (0);
}