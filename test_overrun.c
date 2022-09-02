#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * myAlloc1 ( int size )
{
	char * pMem;
	pMem = (char *) malloc(size);
	memset(pMem, 0xAA, size);
	free(pMem);
	return pMem;
}

char * myAlloc2 ( int size )
{
	char * pMem;
	pMem = (char *) malloc(size);
	memset(pMem, 0xAA, size + 10);
	return pMem;
}


char * myAlloc3 ( int size )
{
	char * pMem;
	pMem = malloc(size);
	memset(pMem, 0xAA, size * 2);
	return pMem;
}


char * myAlloc4 ( int size )
{
	char * pMem;
	pMem = malloc(size);
	memset(pMem, 0xAA, size - 20);
	return pMem;
}

char * myAlloc5 ( int size )
{
	char * pMem;
	pMem = malloc(size);

	pMem += 5;

	memset(pMem, 0xAA, size);
	return pMem;
}

void test ( void )
{
	char *pMem;
	int size = 10;

	pMem = myAlloc1(size);
	free(pMem);
	pMem = myAlloc2(size);
	pMem = myAlloc3(size);
	pMem = myAlloc4(size);
	pMem = myAlloc5(size);
}

