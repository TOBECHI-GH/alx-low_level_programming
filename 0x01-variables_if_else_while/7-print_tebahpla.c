#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character in reverse
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'Z'; ch >= 'A'; ch--)
{
putchar(tolower(ch));
}
putchar('\n');
return (0);
}
