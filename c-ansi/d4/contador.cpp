#include <stdio.h>
int main(){
	int inicial, final;
	char contagem, ipt;
	printf("A contagem eh crescente ou decrescente?(c/d): ");
	do{
		scanf(" %c", &contagem);
		if(contagem != 'c' && contagem != 'd' && contagem != 'C' && contagem != 'D'){
			printf("Opcao invalida, insira novamente: ");
		}
	}while(contagem != 'c' && contagem != 'd' && contagem != 'C' && contagem != 'D');
	printf("Sera uma contagem so de impares, pares ou todos?(i - impares; p - pares; t - todos): ");
	do{
		scanf(" %c", &ipt);
		if(ipt != 'i' && ipt != 'p' && ipt != 't' && ipt != 'I' && ipt != 'P' && ipt != 'T'){
			printf("Opcao invalida, insira novamente: ");
		}
	}while(ipt != 'i' && ipt != 'p' && ipt != 't' && ipt != 'I' && ipt != 'P' && ipt != 'T');
	if(contagem == 'c'){
		do{
			printf("Digite o numero inicial: ");
			scanf("%d", &inicial);
			printf("Digite o numero final: ");
			scanf("%d", &final);
			if(inicial > final){
				printf("Numero final menor que o inicial, insira novamente\n");
			}
		}while(inicial > final);
		if(ipt == 'i' || ipt == 'I'){
			do{
				if(inicial % 2 != 0 || inicial == 1){
					printf("Numero: %d\n", inicial);
				}
				inicial++;
			}while(inicial <= final);
		} else if(ipt == 'p' || ipt == 'P'){
			do{
				if(inicial % 2 == 0){
					printf("Numero: %d\n", inicial);
				}
				inicial++;
			}while(inicial <= final);
		} else {
			do{
				printf("Numero: %d\n", inicial);
				inicial++;
			}while(inicial <= final);
		}
	} else if(contagem == 'd'){
		do{
			printf("Digite o numero inicial: ");
			scanf("%d", &inicial);
			printf("Digite o numero final: ");
			scanf("%d", &final);
			if(inicial < final){
				printf("Numero final maior que o inicial, insira novamente\n");
			}
		}while(inicial < final);
		if(ipt == 'i' || ipt == 'I'){
			do{
				if(inicial % 3 == 0 || inicial == 1){
					printf("Numero: %d\n", inicial);
				}
				inicial--;
			}while(inicial >= final);
		} else if(ipt == 'p' || ipt 'P'){
			do{
				if(inicial % 2 == 0){
					printf("Numero: %d\n", inicial);
				}
				inicial--;
			}while(inicial >= final);
		} else {
			do{
				printf("Numero: %d\n", inicial);
				inicial--;
			}while(inicial >= final);
		}
	}
	return 0;
}