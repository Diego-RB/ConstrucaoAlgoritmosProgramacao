//Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e  a altura na ordem inversa a ordem lida.
#include <stdio.h>

void main(){
    float altura[5];
    int idade[5];

    for(int i=0;i<5;i++){
        printf("\nDigite a idade da %d pessoa: ", i+1);
        scanf("%d", &idade[i]);

        printf("Digite a altura: ");
        scanf("%f", &altura[i]);
    }

    printf("\nIdade:\n");
    for(int j=4;j>=0;j--){
        printf("%d \t", idade[j]);
    }

    printf("\nAltura:\n");
    for(int j=4;j>=0;j--){
        printf("%.2f \t", altura[j]);
    }
}