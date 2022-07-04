#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 *
 * Return: always 0
 */
int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
printf("Last digit of %d is ", lastn);
if (lastn > 5)
	printf("and is greater than 5");
if (lastn == 0)
	printf("and is 0");
if (lastn < 6 && lastn != 0)
	printf("and is less than 6 not 0");
printf("\n");

return (0);
}
