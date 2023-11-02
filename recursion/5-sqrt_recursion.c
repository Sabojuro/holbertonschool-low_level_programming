#include "main.h"

/**
 *  * _sqrt_recursion - Returns the natural square root of a number.
 *   * @n: The number to find the square root of.
 *    *
 *     * Return: The natural square root of n or -1 if no natural square root exists.
 *      */
int _sqrt_recursion(int n) {
	    return find_sqrt(n, 1); // Call a helper function to find the square root starting with an initial guess of 1.
}

/**
 *  * find_sqrt - Recursively find the natural square root.
 *   * @n: The number to find the square root of.
 *    * @guess: The current guess for the square root.
 *     *
 *      * Return: The natural square root of n or -1 if no natural square root exists.
 *       */
int find_sqrt(int n, int guess) {
	    if (n < 0) {
		            return -1; // If n is negative, no natural square root exists.
			        }

	        if (guess * guess == n) {
			        return guess; // If the guess squared equals n, we found the square root.
				    }

		    if (guess * guess > n) {
			            return -1; // If the guess squared exceeds n, no natural square root exists.
				        }

		        return find_sqrt(n, guess + 1); // Increment the guess and continue searching.
}
