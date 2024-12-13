#include <stdio.h>
int main(){
	int escolha;
	printf("Palestra 1 - Energias Renováveis\nPalestra 2 - Nanotecnologia\nPalestra 3 - Automacao\n");
	printf("Escolha o numero da palestra que voce vera de acordo com a tabela acima: ");
	do{
		scanf("%d", &escolha);
		if(escolha == 1){
			printf("Sua sala e 1112");
		} else if(escolha == 2){
			printf("Sua sala e 2543");
		} else if(escolha == 3){
			printf("Sua sala e 7272");
		} else {
			printf("Numero invalido, insira novamente: ");
		}
	}while(escolha != 1 && escolha != 2 && escolha != 3);
	return 0;
}