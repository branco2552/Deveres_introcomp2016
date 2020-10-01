#include<stdio.h>
#include<string.h>

typedef struct data{
	int dia;
	char mes[11];
	int ano;
}Data;

	int main(){

		int mes, i=0;


		Data prin;
		scanf("%d", &prin.dia);

		scanf("%s", prin.mes);

		scanf("%d", &prin.ano);

		if(prin.mes[0] == 'J'){
			if(prin.mes[1] == 'a'){ //Janeiro
				mes = 01;
			}
			else if(prin.mes[1] == 'u'){
				if(prin.mes[2] == 'n'){ //Junho
					mes = 06;
				}
				else if(prin.mes[2] == 'l'){ 	// Julho
					mes = 07;
				}
			}
		}

		else if(prin.mes[0] == 'F'){ //Fevereiro
			mes = 02;
		}

		else if(prin.mes[0] == 'M'){
			if(prin.mes[2] == 'r'){ //Março
				mes = 03;
			}
			else if(prin.mes[2] == 'i'){ // Maio
				mes = 05;
			}
		}

		else if(prin.mes[0] == 'A'){
			if(prin.mes[1] == 'b'){ //Abril
				mes = 04;
			}
			else if(prin.mes[1] == 'g'){ //Agosto
				mes = 8;
			}
		}

		else if(prin.mes[0] == 'S'){ // Setembro
			mes = 9;
		}

		else if(prin.mes[0] == 'O'){ // Outubro
			mes = 10;
			i++;
		}

		else if(prin.mes[0] == 'N'){ //Novembro
			mes = 11;
			i++;
		}

		else if(prin.mes[0] == 'D'){ //Dezembro
			mes = 12;
			i++;
		}

		if(i == 0){
			printf("%d/%d/%d\n", prin.dia, mes, prin.ano);
		}
		else if(i == 1){
				printf("%d/%d/%d\n", prin.dia, mes, prin.ano);
		}

return 0;
}
