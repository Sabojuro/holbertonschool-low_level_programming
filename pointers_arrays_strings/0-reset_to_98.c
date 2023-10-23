#include <stdio.h>

void updateValueTo98(int *ptr) {
	    if (ptr != NULL) { 
		            *ptr = 98
			        }
}

int main() {
	    int number = 42;
	        int *ptr = &number;

		    printf("Before: %d\n", *ptr);

		        updateValueTo98(ptr);

			    printf("After: %d\n", *ptr);

			        return 0;
}
