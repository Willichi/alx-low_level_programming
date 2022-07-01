#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main-Entrypoint
*
*Return:Always0(Success)
*/
intmain(void)
{
intn;

srand(time(0));
n=rand()-RAND_MAX/2;

if(n>0)
printf("%dispositive\n",n);
elseif(n==0)
printf("%diszero\n",n);
else
printf("%disnegative\n",n);

return(0);
}
