//Faça um programa que receba a temperatura média de cada mês do ano e  armazene-as  em  uma  lista.  Após  isto,  calcule  a  média  anual  das temperaturas  e  mostre  todas 
//as  temperaturas  acima  da  média  anual,  e em que mês elas ocorreram (mostrar o mês por extenso: 1 –Janeiro, 2 –Fevereiro, . . . ).
#include <stdio.h>;

void getMes(int mes);

int main(){
    float ListaMeses[12];
    float somaMeses = 0;

    for(int j=0;j<12;j++){
        getMes(j);
        scanf("%f%*c", &ListaMeses[j]);
    }

    for(int i=0;i<12;i++)
        somaMeses += ListaMeses[i];
    
    somaMeses = somaMeses/12;

    printf("\nMeses com temperaturas acima da media - %.2f graus:\n", somaMeses);
    for(int k=0;k<12;k++){
        if(ListaMeses[k] > somaMeses){
            printf("%d - ", k);
            getMes(k);
            printf("%.2f graus\n", ListaMeses[k]);
        }
    }
}

void getMes(int mes){
    switch(mes){
    case 0:
        printf("Janeiro = ");
        break;
    case 1:
        printf("Fevereiro = ");
        break;
    case 2:
        printf("Marco = ");
        break;
    case 3:
        printf("Abril = ");
        break;
    case 4:
        printf("Maio = ");
        break;
    case 5:
        printf("Junho = ");
        break;
    case 6:
        printf("Julho = ");
        break;
    case 7:
        printf("Agosto = ");
        break;
    case 8:
        printf("Setembro = ");
        break;
    case 9:
        printf("Outubro = ");
        break;
    case 10:
        printf("Novembro = ");
        break;
    default:
        printf("Dezembro = ");
    }
}