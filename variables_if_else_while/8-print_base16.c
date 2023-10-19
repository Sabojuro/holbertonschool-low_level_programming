#include <stdio.h>
/**
 *  * main - Prints all the numbers of base 16 in lowercase.
 *   *
 *    * Return: Always 0.
 *     */

int main(void)
{
		int num;
			char lettr;

				for (num = 0; num < 10; num++)
							putchar((num % 10) + '0');

					for (lettr = 'a'; lettr <= 'f'; lettr++)
								putchar(lettr);
						putchar('\n');
							return (0);
}
