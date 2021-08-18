// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário 

#include <stdlib.h>
#include <stdio.h>

void main() {
    float horas, valorHora, salario;

    printf("Informe o valor ganho por Hora: ");
    scanf("%f", &valorHora);

    printf("Informe as horas trabalhadas: ");
    scanf("%f", &horas);
    
    salario = valorHora*valorHora;

    printf("\nO peso total foi: %.2f", salario);
   
}