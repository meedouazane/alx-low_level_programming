#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr- concatenates all the arguments of your program.
 * @ac: number of arguments being passed into the program
 * @av: array of arguments
 * Return: concatenated arguments
 */

char *argstostr(int ac, char **av)
{
int i, j;
int length = 0;
char *k;
int t = 0;

if (ac == 0 || av == NULL)
return NULL;

for (i = 0; i < ac; i++)
length += strlen(av[i]);

k = (char *)malloc((length + ac + 1) * sizeof(char));
if (k == NULL)
return NULL;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
k[t++] = av[i][j];

if (i != ac - 1)
k[t++] = '\n';

}
k[t] = '\n';

return k;
}
