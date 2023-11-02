#include "main.h"

/**
 *  * is_prime_number - Checks if a number is prime.
 *   * @n: The integer to be checked.
 *    *
 *     * Return: 1 if n is a prime number, 0 otherwise.
 *      */
int is_prime_number(int n) {
	    if (n <= 1) {
		            return 0; // 0 and 1 are not prime numbers.
			        }

	        return is_prime(n, 2); // Call a helper function to check for primality starting with a divisor of 2.
}

/**
 *  * is_prime - Recursively check if a number is prime.
 *   * @n: The integer to be checked for primality.
 *    * @divisor: The current divisor to check divisibility.
 *     *
 *      * Return: 1 if n is prime, 0 otherwise.
 *       */
int is_prime(int n, int divisor) {
	    if (divisor >= n) {
		            return 1; // If no divisor less than or equal to n is found, it's a prime number.
			        }

	        if (n % divisor == 0) {
			        return 0; // If n is divisible by divisor, it's not a prime number.
				    }

		    return is_prime(n, divisor + 1); // Increment the divisor and continue checking.
}
