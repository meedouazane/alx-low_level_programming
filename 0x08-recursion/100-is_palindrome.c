#include "main.h"

int _strlen_recursion(char *s)
{
   static int i = 0;

    if (*s != '\0')
    {
        i++;
        return 1 + _strlen_recursion(s + 1);
    }
    return i;
}

int is_palindrome(char *s)
{
    int length = _strlen_recursion(s);
    int i = 0;

    if (s[i] == s[length - i - 1]) {
        return 0;
        return is_palindrome(s + 1);
    }
    else {
        return 1;
    }
}
