#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int numero1,numero2, continuar;
int operacao;
do{

    printf("Seja bem vindo a calculadora em C do PH. \n");
    printf("Selecione o tipo de opera��o:\n ");
    printf("1 - Adi��o + \n");
    printf("2 - Subtra��o - \n");
    printf("3 - Multiplica��o * \n");
    printf("4 - Divis�o / \n ");
    printf("0 - Sair:\n ");
    printf("Escolha aqui o seu tipo de opera��o: \n");
    scanf("%d",&operacao);

    if (operacao != 0){


    printf("Escolha o primeiro numero: \n ");
    scanf("%d",&numero1);
    printf("Escolha o segundo numero: \n ");
    scanf("%d",&numero2);

    if (operacao == 1){
        printf("Resultado : %d\n",numero1 + numero2);
    }else if(operacao == 2){
        printf("Resultado : %d\n",numero1 - numero2);
    }else if(operacao == 3){
        printf("Resultado : %d\n",numero1 * numero2);;
    }else if(operacao == 4){
        printf("Resultado : %d\n",(float)numero1 / numero2);;
    }else{

        printf("Resultado n�o foi obtido");
    }
    }
}while (operacao != 0);
    return 0;
    }


