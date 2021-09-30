//Faça  um  Programa  que  leia  um  vetor  de  10  caracteres,  e  diga  quantas consoantes foram lidas. Imprima as consoantes.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TAM 10

bool verificarVogal(char letra);

int main(void){

    char string[TAM];
    int cont=0;

    printf("Digite uma palavra de no maxim 10 caracters: ");
    scanf("%s", string);
    printf("%s \n", string);

    int lenString = sizeof(string)/sizeof(char);
    
    printf("\nEsta palavra possui %zu caracterer\n", strlen(string));
    #define TAM2 strlen(string)

        for(int i=0;i<TAM2;i++){
            if(!verificarVogal(string[i])){
                printf("%c ", string[i]);
                cont++;
            }
        }
        printf("\nQuantidade de consoantes: %d", cont);
}

bool verificarVogal(char letra){
    char filtro[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};

    for (int j=0; j<TAM;j++){
        if(filtro[j] == letra){
            return true;
        }
    }
    return false;
}