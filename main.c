#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{
	int num1, num2, soma, sub, mult, divi;
	
	printf("Calculadora em C\n ");
	printf("Coloque dois numeros para serem feitas as opera��es:\n");
	scanf("%i%i",&num1,&num2);
	
	soma = num1 + num2;
	sub = num1 / num2;
	mult = num1 * num2;
	divi = num1 - num2;
	
	printf("O resultado da opera��o �: %i\n", soma );
		printf("O resultado da opera��o �: %i\n", sub );
			printf("O resultado da opera��o �: %i\n", mult );
				printf("O resultado da opera��o �: %i\n", divi );
	
				  return 0;
}

