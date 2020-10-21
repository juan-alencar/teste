#include <stdio.h>

// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

int main()
{
	//declarar variaveis
	int num, cont, aux, div;
	
	//solicitar dados ao usuario
	printf("Digite um numero para saber se e primo ou nao:\n");
	scanf("%d", &num);
	
	aux = 0; //inicializando o contador de divisores
	
	//usando o for para ver quantos divisores tem
	
	for(cont = 1; cont <= (num/2); cont++) //o contador vai até a metade do numero
	{
		//divide a metade do numero por todos os anteriores a ele
		div = num % cont; 
	
		//se o resto for igual a 0, aumenta 1 no contador de divisores
		if (div == 0) 
		{	
			//contador de divisores
			aux++;		
		}
	}
	
	//se ele apenas tiver o 1 como divisor, até a metade do seu tamanho, ele é primo
	aux == 1 ? printf("%d E PRIMO", num) : printf("%d NAO E PRIMO", num); 
	
	return 0;
}