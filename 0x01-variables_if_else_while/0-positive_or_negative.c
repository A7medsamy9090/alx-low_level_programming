<<<<<<< HEAD
#include<stdio.h>

/*
 *
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        
	if (n>0)
	{
		printf ("%d is positive",n);
	}
	else if (n<0)
	{
		printf ("%d is negative",n);
	}
	else
	{

	printf ("%d is zero",n);
	}

	return (0);

=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
>>>>>>> 3f4fd5b861e0d0cd5ceef31e0f313de43dac8fd5
