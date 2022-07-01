
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
*
Return: Always 0 (Success)
*1
int main(void)
{
int n;
int Id = 0;
srand(time(0));
n = rand() - RAND_MAX/2;
Id = n % 10;
if (ld ==
{
0)
El 45
printf("Last digit of %i is %i and is 0\n", n,
Id);
}
else if (ld < 6 && Id != 0)
{
printf("Last digit of %i is %i and is less than
6 and not 0\n", n, ld);
}
if (ld > 5)
{
printf("Last digit of %i is %i and is greater t
han 5\n", n, ld);
}
return (0);
}
