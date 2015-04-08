// Exercicio3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

int Soma3Vet(int a, int b, int c, int size); 

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));

	int vet1[SIZE];
	int vet2[SIZE];
	int vet3[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		vet1[i] = rand() % 100;
		vet2[i] = rand() % 100;
		vet3[i] = rand() % 100;

		printf("Vetor 1: %d\nVetor 2: %d\nVetor 3: %d\n", vet1[i], vet2[i], vet3[i]);
		printf("Soma Vetores: %d\n\n", Soma3Vet(vet1[i], vet2[i], vet3[i], SIZE) );
		system("pause");
		printf("\n");
	}
	return 0;
}

int Soma3Vet(int a, int b, int c, int size){
	for (int i = 0; i < SIZE; i++)
	{
		return a + b + c;
	}
}