// Exercicio2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	SIZE 2

int MultVet(int x, int y, int size);

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	int vetA[SIZE];
	int vetB[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		vetA[i] = rand() % 100;
		vetB[i] = rand() % 100;
		printf("Vetor A: %d\nVetor B: %d\n", vetA[i], vetB[i]);
		printf("Multiplicaçao: %d\n\n", MultVet (vetA[i], vetB[i], SIZE) );

	}
	return 0;
}

int MultVet(int x, int y, int size)
{
	for (int i = 0; i < SIZE; i++)
	{
		return x * y;
	}
}