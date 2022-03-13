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
char lower_case;

ch = 'G';
lower_case = tolower(ch);
putchar(lower_case);
return (0);
}
