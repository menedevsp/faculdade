#include <stdio.h>
int main(){
	char nda;
	int mesa, atendimento, menu, escolha, bebida;
	printf("Bem-vindo ao restaurante Sal Grosso\nDigite a o numero da sua mesa: ");
	scanf("%d", &mesa);
	printf("Qual o tipo de atendimento voce deseja?(1 - rodizio; 2 - a lacarte; 0 - nao deseja comer): ");
	do{
		scanf("%d", &atendimento);
		if(atendimento == 1){
			printf("Todas as opcoes de comida e bebida passarao na mesa %d", mesa);
		} else if(atendimento == 2){
			printf("Para A Lacarte teremos as seguintes opcoes:\n");
			printf("1 - Bife a cavalo com arroz e batata\n2 - Lasanha a bolonhesa\n3 - Iscas de carne com legumes saltados\n4 - Strogonofe de carne com batata maior palha\n");
			printf("Escolha uma das opcoes acima: ");
			do{
				scanf("%d", &menu);
				if(menu == 1 || menu == 2 || menu == 3 || menu == 4){
					printf("Qual das seguites opcoes de bebida voce deseja?(1 - refrigerante; 2 - suco; 0 - sem bebida): ");
					do{
						scanf("%d", &escolha);
						if(escolha == 1){
							printf("1 - Coca-Cola\n2 - Fanta-Laranja\n3 - Bare\nEscolha uma das opcoes acima: ");
							do{
								scanf("%d", &bebida);
								if(bebida == 1 || bebida == 2 || bebida == 3){
									printf("Comida: %d\nRefrigerante: %d", menu, bebida);
								} else {
									printf("Opcao invalida, insira novamente: ");
								}
							}while(bebida != 1 && bebida != 2 && bebida != 3);
						} else if(escolha == 2){
							printf("1 - Suco de Uva\n2 - Suco de Laranja\n3 - Suco de Maracuja\nEscolha uma das opcoes acima: ");
							do{
								scanf("%d", &bebida);
								if(bebida == 1 || bebida == 2 || bebida == 3){
									printf("Comida: %d\nSuco: %d", menu, bebida);
								} else {
									printf("Opcao invalida, insira novamente: ");
								}
							}while(bebida != 1 && bebida != 2 && bebida != 3);
						}  else if(escolha == 0){
							printf("Comida: %d\n", menu);
						} else {
							printf("Opcao invalida, insira novamente: ");
						}
					}while(escolha != 1 && escolha != 2 && escolha != 0);
				} else {
					printf("Opcao invalida, insira novamente: ");
				}
			}while(menu != 1 && menu != 2 && menu != 3 && menu != 4);
		} else if(atendimento == 0){
			printf("Deseja alguma bebida?(s - sim; qualquer outra tecla - nao): ");
			scanf(" %c", &nda);
			if(nda == 's'){
				printf("Qual das seguites opcoes de bebida voce deseja?(1 - refrigerante; 2 - suco): ");
				do{
					scanf("%d", &escolha);
					if(escolha == 1){
						printf("1 - Coca-Cola\n2 - Fanta-Laranja\n3 - Bare\nEscolha uma das opcoes acima: ");
						do{
							scanf("%d", &bebida);
							if(bebida == 1 || bebida == 2 || bebida == 3){
								printf("Refrigerante: %d", bebida);
							} else {
								printf("Opcao invalida, insira novamente: ");
							}
						}while(bebida != 1 && bebida != 2 && bebida != 3);
					} else if(escolha == 2){
						printf("1 - Suco de Uva\n2 - Suco de Laranja\n3 - Suco de Maracuja\nEscolha uma das opcoes acima: ");
						do{
							scanf("%d", &bebida);
							if(bebida == 1 || bebida == 2 || bebida == 3){
								printf("Suco: %d", bebida);
							} else {
								printf("Opcao invalida, insira novamente: ");
							}
						}while(bebida != 1 && bebida != 2 && bebida != 3);
					} else {
						printf("Opcao invalida, insira novamente: ");
					}
				}while(escolha != 1 && escolha != 2);
			} else {
				printf("Volte sempre!");
			}
		} else {
			printf("Opcao invalida, insira novamente: ");
		}
	}while(atendimento != 1 && atendimento != 2 && atendimento != 0);
	return 0;
}