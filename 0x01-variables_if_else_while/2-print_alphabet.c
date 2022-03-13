#include <stdio.h>
#include<ctype.h>
/**
 * main - main block
 * Description: Lowercase of character
 * Return: 0
 */
int main(void) 
{
char ch;
char lower_case;

ch = 'G\n';
lower_case = tolower(ch);
putchar(lower_case);
return (0);
}