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
intd;
charlow;

for(d='0';d<='9';d++)
putchar(d);
for(low='a';low<='f';low++)
putchar(low);
putchar('\n');

return(0);
}
