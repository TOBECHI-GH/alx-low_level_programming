#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character except q and e
 * Return: 0
 */
int main(void)
{
int ch = 'A';
while (isalpha(ch) != 'Q' && isalpha(ch) != 'E')
{
putchar(tolower(ch));
ch++;
}
putchar('\n');
return (0);
}
