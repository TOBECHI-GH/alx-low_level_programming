#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character except q and e
 * While loop should always see the increament ++
 * How can integer accept alphabet in single quote
 * Return: 0
 */
int main(void)
{
int qq = 'Q';
int ee = 'E';
int ch = 'A';
while (ch <= 'Z')
{
if ((ch != qq) && (ch != ee))
{
putchar(tolower(ch));
}
ch++;
}
putchar('\n');
return (0);
}
