//Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.
#include <stdio.h>
#define TAM 5
int main(void){
    float media, soma, altura,  idadeMaior13[TAM];
    int idade, cont=0, cont2=0;

    for(int i=0;i<TAM;i++){
        printf("\nDigite a idade da %d pessoa: ", i+1);
        scanf("%d", &idade);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if(idade>13){
            idadeMaior13[i] = altura;
            cont++;
        }
        soma += altura;
    }
    media = soma/TAM;

    for(int j=0;j<cont;j++){
        if(idadeMaior13[j]<media){
            cont2++;
        }
    }
    printf("\nA idade media eh %.2f metros.\n", media);
    printf("Quantidade de pessoas com altura inferior a media: %d",cont2);
}