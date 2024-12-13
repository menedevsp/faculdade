#include <stdio.h>
int main(){
	int placa;
	printf("Insira o final da placa do seu carro: ");
	scanf("%d", &placa);
	printf("Sua placa pode transitar nos dias:\n________________________________\n");
	if(placa == 2){
		printf("Segunda-Feira; \n");
	}
	if(placa == 3){
		printf("Terca-Feira; \n");
	}
	if(placa == 7){
		printf("Quarta-Feira; \n");
	}
	if(placa == 4 || placa == 5){
		printf("Quinta-Feira; \n");
	}
	if(placa == 6){
		printf("Sexta-Feira; \n");
	}
	if(placa % 2 == 0){
		printf("Sabado; \n");
	}
	printf("Domingo.");
	return 0;
}