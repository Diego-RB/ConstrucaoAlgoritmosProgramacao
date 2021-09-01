// Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
// •A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
// •A mensagem "Reprovado", se a média for menor do que sete;

#include <stdlib.h>
#include <stdio.h>

void main (){

    float nota, media, soma;

    for(int i=0; i < 2; i++){
        printf("Insira Uma nota: ");
        scanf("%f", &nota);

        soma = soma + nota;
    }
    soma/2 >= 7 ? printf("Aprovado") : printf("Reprovado");

}