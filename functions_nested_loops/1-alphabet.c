#include "main.h"

/**
 *  * prints_alphabet -  prints the alphabet in lowercase, followed by a new line.
 *   */

void prints_alphabet(void)
{
		char alphabet;

			for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
						_putchar(alphabet);

				_putchar('\n');
}
