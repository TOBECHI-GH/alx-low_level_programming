#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digit numbers of base 10 with no char variable
 * putchar expects variables of int type, we can pass them arguments of char type
 * because what is internally stored of these variables are their numeric values
 * Return: 0
 */
int main(void)
{
int num;
while (num <= 9)
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
