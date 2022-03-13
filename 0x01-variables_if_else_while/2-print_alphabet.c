#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(tolower(ch));
}
putchar('\n');
return (0);
}
