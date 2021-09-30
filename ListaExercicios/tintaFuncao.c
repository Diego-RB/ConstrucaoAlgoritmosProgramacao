void logica() {
    float lataTinta=0, preco=0, aream2=0, valorAposVirgula=0;
        int opsao;
        while(opsao != 0){
            printf("\nInforme em metros quadrados o tamanho do local a ser pintado: ");
            scanf("%f", &aream2);

            lataTinta = (aream2/3)/18;

            valorAposVirgula = lataTinta - (int)lataTinta;
        
            if (valorAposVirgula >= 0.5){
                lataTinta = (int)lataTinta + 1;
                preco = lataTinta * 80;
                
            } 
            else if(valorAposVirgula < 0.5 && valorAposVirgula > 0){
                lataTinta = (int)lataTinta;
            }
                
            preco = lataTinta * 80;

            lataTinta <= 1 ? printf("\nSerah necessario comprar 1 lata de tinta.\nO valor a ser pago eh de R$80,00") : printf("\nSerah necessario comprar %.2f latas de tinta.\nO valor a ser pago eh de: R$%.2f",lataTinta,preco);

            printf("\n\nCaso deseja continuar digite 1. Caso deseja fechar o programa digite 0: ");
            scanf("%d", &opsao);
        }
}