#include "main.h"

/**
*_isupper - checks whether a character is uppercase or not
*@c: characternto be tested
*Return: 1 whether it is, 0 otherwisw
*/
int _isupper(int c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return (1);
    }

    return (0);
}
