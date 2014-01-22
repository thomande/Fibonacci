// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "functions.h"
#define n 20



int _tmain(int argc, _TCHAR* argv[])
{
	int i, f[n];
	f[0] = 1;
	f[1] = 1;
	for (i = 2; i < n; i++) {
		f[i] = f[i - 2] + f[i - 1];
	}
	printf("These are the first %d Fibonacci numbers\n", n);
	for (i = 0; i < n; i++) {
		printf("%8d", f[i]);
	}
	printf("\nI will now rearrange them in the opposite order\n");
	int fr[n];		/* fr Fibonacci reverse, could also use the same for loop as above*/
	for (i = n; i >= 0; i--) {
		fr[n - i] = f[i - 1];
	}
	for (i = 0; i < n; i++) {
		printf("%8d", fr[i]);
	}
	int *fs;
	printf("Now rearrange them in a stochastic order.\n");
	fs = shuffle(f, n);  /*pekare eller inte? vilken mer indata?*/
	for (i = 0; i < n; i++)
		printf("%d ", fs[i]);

	printf("\nMake an array of random numbers\n");
	int *asd;
	asd = getRandom();
	for (i = 0; i < 10; i++)
	{
		printf("*(asd + %d) : %d\n", i, *(asd + i));
	}
	char x;
	x = _getch();
	printf("%c", x);
	printf("%c", x);
	printf("%c", x);
}

