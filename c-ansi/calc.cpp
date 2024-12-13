#include <stdio.h>
int main(){
	char opera;
	float numero1, numero2, acaba = 0;
	do{
		printf("Menu:\n\nadicao: +\nsubtracao: -\nmultiplicacao: *\ndivisao: /\nsair: 0\n\n");
		printf("Insira o simbolo da operacao a ser calculada de acordo com o menu acima: ");
		scanf(" %c", &opera);
		if(opera!='0'){
			do{
				printf("Insira o primeiro numero: ");
				scanf("%f", &numero1);
				printf("Insira o segundo numero: ");
				scanf("%f", &numero2);
				if(opera == '/' && numero2 == 0){
					printf("O segundo numero deve ser diferente de zero, insira novamente!\n");
					acaba++;
				} else {
					acaba = 0;
				}
			}(acaba!=0);
		}
		switch(opera){
			case '+':{
				printf("%.2f + %.2f = %.2f\n", numero1, numero2, numero1+numero2);
				break;
			}
			case '-':{
				printf("%.2f - %.2f = %.2f\n", numero1, numero2, numero1-numero2);
				break;
			}
			case '*':{
				printf("%.2f * %.2f = %.2f\n", numero1, numero2, numero1*numero2);
				break;
			}
			case '/':{
				printf("%.2f / %.2f = %.2f\n", numero1, numero2, numero1/numero2);
				break;
			}
			case '0':{
				acaba++;
				break;
			}
			default:{
				printf("Operacao invalida, insira novamente!\n");
				break;
			}
			
		}
	}while(acaba == 0);
	return 0;
}