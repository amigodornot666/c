/* sums.c add numbers 1-10 together */
#include <stdio.h>

int main(int argc, const char * argv[]) {
				int number, sum;

				sum = 0;

				for ( number=1; number <=10; number++) {
								sum += number;
				}

				printf("The sum of the numbers 1 to 10 is %d.\n", sum);

				return 0;
}
