#include "main.h"
/**
*Author: ADAMU Clement 
* File:  0-isupper.c
* _isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
