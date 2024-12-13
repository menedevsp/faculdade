#include <stdio.h>
int main(){
	int escolha, acaba = 0, inicio, fim;
	do{
		printf("Menu:\n\n1 - Crescente\n2 - Decrescente\n3 - Crescente pares\n4 - Crescente impares\n5 - Decrescente pares\n6 - Decrescente impares\n7 - Sair\n\nInsira um numero do menu para escolher: ");
		scanf("%d", &escolha);
		switch(escolha){
			case 1:{
				do{
					printf("Insira o numero de inicio: ");
					scanf("%d", &inicio);
					printf("Insira o numero final: ");
					scanf("%d", &fim);
					if(inicio >= fim){
						printf("O numero de inicio deve ser menor que o final! Insira novamente!\n");
					}
				}while(inicio >= fim);
				for(int i = inicio; i <= fim; i++){
					printf("%d\n", i);
				}
				break;
			}
			case 2:{
				do{
					printf("Insira o numero de inicio: ");
					scanf("%d", &inicio);
					printf("Insira o numero final: ");
					scanf("%d", &fim);
					if(inicio <= fim){
						printf("O numero de inicio deve ser maior que o final! Insira novamente!\n");
					}
				}while(inicio <= fim);
				for(int i = inicio; i >= fim; i--){
					printf("%d\n", i);
				}
				break;
			}
			case 3:{
				do{
					printf("Insira o numero de inicio: ");
					scanf("%d", &inicio);
					printf("Insira o numero final: ");
					scanf("%d", &fim);
					if(inicio >= fim){
						printf("O numero de inicio deve ser menor que o final!\nInsira novamente!\n");
					}
				}while(inicio >= fim);
				for(int i = inicio; i <= fim; i++){
					if(i % 2 == 0){
						printf("%d\n", i);
					}
				}
				break;
			}
			case 4:{
				do{
					printf("Insira o numero de inicio: ");
					scanf("%d", &inicio);
					printf("Insira o numero final: ");
					scanf("%d", &fim);
					if(inicio >= fim){
						printf("O numero de inicio deve ser menor que o final!\nInsira novamente!\n");
					}
				}while(inicio >= fim);
				for(int i = inicio; i <= fim; i++){
					if(i % 2 != 0){
						printf("%d\n", i);
					}
				}
				break;
			}
			case 5:{
				do{
					printf("Insira o numero de inicio: ");
					scanf("%d", &inicio);
					printf("Insira o numero final: ");
					scanf("%d", &fim);
					if(inicio <= fim){
						printf("O numero de inicio deve ser maior que o final! Insira novamente!\n");
					}
				}while(inicio <= fim);
				for(int i = inicio; i >= fim; i--){
					if(i % 2 == 0){
						printf("%d\n", i);
					}
				}
				break;
			}
			case 6:{
				do{
					printf("Insira o numero de inicio: ");
					scanf("%d", &inicio);
					printf("Insira o numero final: ");
					scanf("%d", &fim);
					if(inicio <= fim){
						printf("O numero de inicio deve ser maior que o final! Insira novamente!\n");
					}
				}while(inicio <= fim);
				for(int i = inicio; i >= fim; i--){
					if(i % 2 != 0){
						printf("%d\n", i);
					}
				}
				break;
			}
			case 7:{
				acaba++;
				break;
			}
			default:{
				printf("Opcao invalida, insira novamente\n");
				break;
			}
		}
	}while(acaba==0);
	return 0;
}