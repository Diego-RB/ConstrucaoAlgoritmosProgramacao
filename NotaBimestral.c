#include <stdlib.h>
#include <stdio.h>
//1.	Faça um Programa que peça as 4 notas bimestrais e mostre a média.
void main() {
    double nota, media, soma;
    for(double i = 1; i <= 4; i++){
        printf("Digita a nota do %d Bimestre: ",i);
        scanf("%f",&nota);
        soma += soma + nota;
    }
    media = soma/4;
    printf("A media eh : %f",media);
}