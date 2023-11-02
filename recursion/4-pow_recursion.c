#include "main.h"

/**
 *  * _pow_recursion - Returns the value of x raised to the power of y.
 *   * @x: The base.
 *    * @y: The exponent.
 *     *
 *      * Return: The result of x raised to the power of y.
 *       */
int _pow_recursion(int x, int y) {
	    if (y < 0) {
		            return -1; // If y is negative, return -1 as specified.
			        }

	        if (y == 0) {
			        return 1; // If y is 0, the result is 1.
				    }

		    return x * _pow_recursion(x, y - 1); // Recursively multiply x by x raised to the power of (y-1).
}
