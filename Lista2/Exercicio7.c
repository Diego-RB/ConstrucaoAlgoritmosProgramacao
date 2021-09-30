//Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
#include <stdio.h>

#define TAM 2

void main() {
    int vet1[TAM], vet2[TAM], vet3[TAM],vet4[TAM*3];

    printf("preencha o primeiro vetor:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%i", &vet1[i]);
    }

    printf("preencha o segundo vetor:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%i", &vet2[i]);
    }

    printf("preencha o terceiro vetor:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%i", &vet3[i]);
    }

    for (int i = 0; i < TAM; i++) {
        vet4[i*3] = vet1[i];
        vet4[i*3+1] = vet2[i];
        vet4[i*3+2] = vet3[i];
    }

    printf("Vetor 1: ");
    for (int i = 0; i < TAM; i++) {
        printf("%i ", vet1[i]);
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < TAM; i++) {
        printf("%i ", vet2[i]);
    }
    printf("\n");

    printf("Vetor 3: ");
    for (int i = 0; i < TAM; i++) {
        printf("%i ", vet3[i]);
    }
    printf("\n");

    printf("Vetor 4: ");
    for (int i = 0; i < TAM*3; i++) {
        printf("%i ", vet4[i]);
    }
}