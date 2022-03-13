#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character except q and e
 * Return: 0
 */
int main(void)
{
int qq = 'Q';
int ee = 'E';
int ch = 'A';
while (isalpha(ch) != qq && isalpha(ch) != ee)
{
putchar(tolower(ch));
ch++;
}
putchar('\n');
return (0);
}
