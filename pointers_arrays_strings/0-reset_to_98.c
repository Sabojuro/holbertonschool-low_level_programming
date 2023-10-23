#include <stdio.h>

void reset_to_98(int *n) {
    if (n != NULL) { // Check if the pointer is not NULL to avoid undefined behavior.
        *n = 98; // Update the value the pointer points to 98.
			        }
    }

int main() {
    int number = 42;
    int *ptr = &number;

    printf("Before: %d\n", *ptr);
		        
    reset_to_98(ptr);

    printf("After: %d\n", *ptr);

    return 0;
}
