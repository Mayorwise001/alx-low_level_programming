#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
#include "holberton.h"
#include <unistd.h>
#include <main.h>
/**
* main - print ok
* _putchar -writes the charate
*main - ok this is cor
* @c: The charter to print
* Return: on the success 1.
*/


int _putchar(char c)
	{

		return (write(1, &c, 1));
		}
