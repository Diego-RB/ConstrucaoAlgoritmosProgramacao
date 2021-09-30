//Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos
//dois outros vetores.
#include <stdio.h>

#define TAM 10

void main() {
    int vet1[TAM], vet2[TAM], vet3[TAM*2], i;

    printf("preencha o primeiro vetor:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%i", &vet1[i]);
    }

    printf("preencha o segundo vetor:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%i", &vet2[i]);
    }

    for (i = 0; i < TAM; i++) {
        vet3[i*2] = vet1[i];
        vet3[i*2+1] = vet2[i];
    }

    printf("Vetor 1: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (i = 0; i < TAM; i++) {
        printf("%i ", vet2[i]);
    }
    printf("\n");

    printf("Vetor 3: ");
    for (i = 0; i < TAM*2; i++) {
        printf("%i ", vet3[i]);
    }
}