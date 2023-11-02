#include "main.h"

/**
 *  * _strlen_recursion - Returns the length of a string using recursion.
 *   * @s: The string to find the length of.
 *    *
 *     * Return: The length of the string.
 *      */
int _strlen_recursion(char *s) {
	    if (*s == '\0') {
		            return 0; // If the current character is the null character, the length is 0.
			        }

	        return 1 + _strlen_recursion(s + 1); // Add 1 to the length and recursively process the next character.
}
