#include<stdio.h>
#include<stdlib.h>


int main(){

	int i=0, j=0;
	int num=0;

	while(num != -1){	//enquanto nao digitar "-1" o programa vai continuar a verificar os numeros
		j=0;
		scanf("%d", &num);	//le o numero do teclado
		for(i=1; i<=num; i++)
			if(num%i==0)	//faz o calculo do numero
				j++;

		if(j ==2)	//verifica se o numero eh Primo pelo resto dele
			printf("%d eh primo\n", num);

		else if((j != 2) && (num != -1)) 	//verifica se o numero nao eh Primo pelo resto dele
			printf("%d n eh primo\n", num);
	}

return 0;
}
