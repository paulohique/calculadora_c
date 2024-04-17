#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float numero1,numero2, continuar;
float operacao;
do{

    printf("Seja bem vindo a calculadora em C do PH. \n");
        printf("Selecione o tipo de operação:\n ");
            printf("1 - Adição + \n");
            printf("2 - Subtração - \n");
            printf("3 - Multiplicação * \n");
            printf("4 - Divisão / \n ");
            printf("0 - Sair:\n ");
        printf("Escolha aqui o seu tipo de operação: \n");
            scanf("%f",&operacao);

    if (operacao != 0){


    printf("Escolha o primeiro numero: \n ");
        scanf("%f",&numero1);
    printf("Escolha o segundo numero: \n ");
        scanf("%f",&numero2);

    if (operacao == 1){
        printf("Resultado : %f\n",numero1 + numero2);
    }else if(operacao == 2){
        printf("Resultado : %f\n",numero1 - numero2);
    }else if(operacao == 3){
        printf("Resultado : %f\n",numero1 * numero2);;
    }else if(operacao == 4){
        printf("Resultado : %.2f\n",(float)numero1 / numero2);;
    }else{

        printf("Resultado não foi obtido");
    }
    }
}while (operacao != 0);
    return 0;
    }


