// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se 
// que são descontados 11%  para  o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:a.salário bruto.b.quanto pagou ao INSS.c.quanto pagou 
// ao sindicato.d.o salário líquido.e.calcule os descontos e o salário líquido,

#include <stdlib.h>
#include <stdio.h>

void main (){

    float salarioBruto, salarioHora, horas, salarioLiquido, inss, taxaSindicato, descontos, impostoRenda;

    printf("Informe o valor ganho por hora: ");
    scanf("%f",&salarioHora);

    printf("Informe a quantidade de horas trabalhados: ");
    scanf("%f",&horas);

    salarioBruto = salarioHora * horas;
    impostoRenda = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    taxaSindicato = salarioBruto * 0.05;
    descontos = impostoRenda + inss + taxaSindicato;
    salarioLiquido = salarioBruto - descontos;

    printf("O seu salario com os respectivos descontos eh:\n\n Salario Bruto: %.2f \n Imposto de renda: %.2f \n INSS: %.2f \n Sindicato: %.2f \n Salario liquido: %.2f\n", salarioBruto, impostoRenda, inss, taxaSindicato, salarioLiquido);

}