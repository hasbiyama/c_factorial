#include <stdio.h>

int f(int x)
{
	int r=1,i;
	
	for (i=x;i>0;i--)
	  r=r*i;
	return r;  
}

int main(void)
{
	int x=0,i,y,z;
	
	for (i=10;i>1;--i)
	{
		x=f(i) - (f(i-1));
		printf("%d! - %d! is %d\n", i, i-1, x);	
	}
			
	z= f(10) - f(9) + f(8) - f(7) + f(6) - f(5) + f(4) - f(3) + f(2) - f(1);
	printf("\n(10!-9!) + (8!-7!) + ... + (2!-1!) = %d\n", z);
	
}


