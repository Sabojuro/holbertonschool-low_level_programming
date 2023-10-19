#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - entry point
 *   *
 *    * Return: 0 (if success)
 *     */

int main(void)
{
		char ronaldo;

			for (ronaldo = 'a' ; ronaldo <= 'z' ; ronaldo++)
						if (ronaldo != 'e' && ronaldo != 'q')
										putchar(ronaldo);
				putchar('\n');
					return (0);
}
