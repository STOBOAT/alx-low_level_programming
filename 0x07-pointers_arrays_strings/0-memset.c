#include "main.h"
/*
   *_memset - This fills a memory with a specific value
   *
   *@s: the starting address of a memory
   *
   *@b: the expected value
   *
   *@n: the number of bytes to be changed
   *
   *Return: the pointer to the memory area
   */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
