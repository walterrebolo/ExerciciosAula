// Exercicio1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

int SomaVetores(int n, int m, int tamanho);

int _tmain(int argc, _TCHAR* argv[])
{
	int vet1[SIZE];
	int vet2[SIZE];

	srand(time(NULL));

	int j;
	for ( j = 0; j < SIZE; j++)
	{
		vet1[j] = rand() % 100;
	    vet2[j] = rand() % 100;
		printf("Vetor 1: %d\nVetor 2: %d\n", vet1[j], vet2[j]);
		printf("Soma: %d\n\n", SomaVetores (vet1[j], vet2[j], SIZE) );
	
		system("pause");
		} 
	return 0;
}

int SomaVetores(int n, int m, int tamanho)
{
	int SomaTotal(int x, int y, int tamanho);
	int i;
	int auxSoma = 0;
	int soma = 0;

	for (i = 0; i < SIZE; i++)
	{
		auxSoma = n + m;
		return soma += auxSoma;
	}
}