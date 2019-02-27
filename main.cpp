#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int soma;
	int sub;
	int div;
	int mult;
	int valor;
	int A;
	int B;
	
	A=0;
	B=0;
	printf ("Informe um valor para A:\n");
	scanf("%d", &A);
	
	printf( "Informe um valor prara B:\n");
	scanf ("%d", &B);
	

	
	printf(" \n Escolha uma das opcoes abaixo: ");
    printf(" \n 1. Soma ");
    printf(" \n 2. Subtracao ");
    printf(" \n 3. Divisao ");
    printf(" \n 4. Multiplicacao ");
 
    printf(" \n Digite o numero da opção desejada: ");
    scanf("%d", &valor);
 
	
	switch (valor)
	{
		case 1 : soma = A + B;
		printf ("Soma dos valores eh:\n %d", soma);
		break;
		
		case 2 : sub = A - B;
		printf ("Subtracao dos valores eh:\n %d", sub);
		break;
		
		case 3 : div = A/B;
		printf ("Divisao dos valores eh:\n %d", div);
		break;
		
		case 4 : 	mult = A*B;
		printf ("Multiplicacao dos valores eh:\n %d", mult);
		break;
	}
	
  

	
	
	
	
	return 0;
}
