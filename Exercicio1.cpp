// Exercicio1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

int SomaVetores(int n[], int m[], int tamanho);

int _tmain(int argc, _TCHAR* argv[])
{
	int vet1[SIZE];
	int vet2[SIZE];
	int j;

	srand(time(NULL));

	for ( j = 0; j < SIZE; j++)
	{
		vet1[j] = rand() % 100;
	    vet2[j] = rand() % 100;
		printf("Vetor 1: %d\nVetor 2: %d\n", vet1[j], vet2[j]);
		printf("Soma: %d\n\n", SomaVetores(vet1, vet2, SIZE));
	}
	return 0;
}

int SomaVetores(int n[], int m[], int tamanho)
{
	int soma[SIZE] = { 0, 0, 0 };
	int aux[SIZE] = { 0, 0, 0 };
	int i;

	for (i = 0; i < SIZE;)
	{
		aux[i] = n[i] + m[i];
		soma[i] += aux[i];
		
		return soma[i];
	}
}
