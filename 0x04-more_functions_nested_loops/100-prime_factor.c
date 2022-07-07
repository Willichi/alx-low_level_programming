#include <stdio.h> 
 
int main (void) 
{ 
long long int number=612852475143, large_factor=0, i=2; 
while (number!=1)
{ 
if (number%i==0) 
{ 
while (number%i==0) 
{ 
printf ("%lld\t", i); 
number/=i; 
} 
large_factor=i; 
} 
i++; 
} 
printf ("\n\nThe largest prime factor is : %lld\n\n", large_factor); 
return 0; 
} 
