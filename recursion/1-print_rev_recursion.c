#include "main.h"

/**
 *  * _print_rev_recursion - Prints a string in reverse using recursion.
 *   * @s: The string to be printed.
 *    */
void _print_rev_recursion(char *s) {
	    if (*s == '\0') {
		            return; // Si le caractère actuel est le caractère nul, retournez sans rien faire.
			        }

	        _print_rev_recursion(s + 1); // Appel récursif pour avancer au prochain caractère.

		    _putchar(*s); // Imprime le caractère actuel après avoir traité les caractères suivants.
}
