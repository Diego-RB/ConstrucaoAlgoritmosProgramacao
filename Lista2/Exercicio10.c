//Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
// 1."Telefonou para a vítima?"
// 2."Esteve no local do crime?"
// 3."Mora perto da vítima?"
// 4."Devia para a vítima?"
// 5."Já trabalhou com a vítima?"
// O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder  positivamente  a  2  questões  ela  deve  ser  classificada 
// como   "Suspeita",   entre   3   e   4   como   "Cúmplice"   e   5   como"Assassino". Caso contrário, ele será classificado como "Inocente".

#include <stdio.h>

int main (void){
    int qtd=0, resposta;
    char *pergunta[] = {"1 - Telefonou para a vitima?", "2 - Esteve no local do crime?", "3 - Mora perto da vitima?", "4 - Devia para a vitima?", "5 - Ja trabalhou com a vitima?"};

    printf("------Digite 1 se a resposta for SIM e 0 se a resposta for nao-------\n");

    for(int i=0; i<5; i++){
        printf("\n%s ", pergunta[i]);
        scanf(" %d", &resposta);

        if(resposta == 1)
            qtd++;
    }

    if (qtd == 2){
        printf("\n\nSuspeita");
    } 
    else if((qtd== 3)||(qtd== 4)){
        printf("\n\nCumplice\n");
            
    }
    else if (qtd== 5){
            printf("\n\nAssasino");
                
    } 
    else{
        printf("\n\nInocente");
    } 
    return 0;
}