
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
>>>>>>> 92fa18bcdd100fedf876a82a75ed1e1c8822f53d
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
<<<<<<< HEAD
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
return (0)
}
