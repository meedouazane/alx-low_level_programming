#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 1 (Seccess)
 */
int main(void)
{
char quote[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i;
for (i=0; quote[i] != 0; i++){
	putchar(quote[i]);
}

return (1);
}


