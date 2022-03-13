#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character and then uppercase
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(tolower(ch));
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(toupper(ch));
}
putchar('\n');
return (0);
}
