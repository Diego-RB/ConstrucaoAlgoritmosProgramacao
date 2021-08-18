// João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior
// que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa
// que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João
// deverá pagar. Imprima os dados do programa com as mensagens adequadas.

#include <stdlib.h>
#include <stdio.h>

void main() {
    double peso, pesoTotal, multa, excesso;

    printf("Informe o valor do peso em KG dos peixes: ");
    scanf("%lf", &pesoTotal);

    if (pesoTotal > 50){
        excesso = pesoTotal - 50;
        multa = excesso * 4.00;

        printf("O peso exedido foi: %.2f", excesso);
        printf("\nO valor da multa eh: %.2f", multa);
    }else{
        printf("\nVoce nao presisa pagar multa");
    }
}