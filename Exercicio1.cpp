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
	

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		vet1[i] = rand() % 100;
		vet2[i] = rand() % 100;
		printf("Vetor 1: %d\nVetor 2: %d\n", vet1[i], vet2[i]);
		printf("Soma: %d\n", SomaVetores(vet1, vet2, SIZE));
	}
	

/*	for (int i = 0; i < SIZE; i++)
	{
		vet1[i] = rand() % 100;
		vet2[i] = rand() % 100;
		
		printf("Vetor1: %d\nVetor2: %d\n", vet1[i], vet2[i]);

		soma[i] = vet1[i] + vet2[i];
		printf("Soma: %d\n\n", soma[i]);*/
	//}

	return 0;
}

int SomaVetores(int n[], int m[], int tamanho)
{
	int soma[SIZE] = { 0, 0, 0 };
	/*int vet1[SIZE];
	int vet2[SIZE];
	int soma[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		vet1[i] = rand() % 100;
		vet2[i] = rand() % 100;*/

//		printf("Vetor1: %d\nVetor2: %d\n", vet1[i], vet2[i]);

		//soma[i] = vet1[i] + vet2[i];
//		printf("Soma: %d\n\n", soma[i]);
	int i;
	int aux[SIZE] = { 0, 0, 0 };
	for (i = 0; i < SIZE;)
	{
		aux[i] = n[i] + m[i];
		
		
		return soma[i] = aux[i];
	}
	
	
	
}
