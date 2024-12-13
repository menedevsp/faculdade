#include <stdio.h>
int main(){
	char tamanho, componente1[20], componente2[20], componente3[20];
	float preco = 0;
	printf("tabela de precos:\npequeno - R$ 10,00\nmedio - R$ 12,00\ngrande - R$ 15,00\nextra grande - R$ 18,00\n");
	printf("informe o tamanho do acai.(p - pequeno; m - medio; g - grande; x - extra grande): ");
	scanf(" %s", &tamanho);
	if(tamanho == 'p' || tamanho == 'P'){
		preco += 10;
	} else if(tamanho == 'm' || tamanho == 'M'){
		preco += 12;
	} else if(tamanho == 'g' || tamanho == 'G'){
		preco += 15;
	} else if(tamanho == 'x' || tamanho == 'X'){
		preco += 18;
	} else {
		printf("tamanho inserido invalido\n");
	}
	if(tamanho == 'p' || tamanho == 'm' || tamanho == 'g' || tamanho == 'x' || tamanho == 'P' || tamanho == 'M' || tamanho == 'G' || tamanho == 'X'){
		printf("informe o primeiro acompanhamento: ");
		scanf(" %[^\n]s", &componente1);
		printf("informe o segundo acompanhamento: ");
		scanf(" %[^\n]s", &componente2);
		printf("informe o terceiro acompanhamento: ");
		scanf(" %[^\n]s", &componente3);
		printf("\ntamanho: %c\nacompanhamentos: %s, %s, %s\npreco: R$ %.2f", tamanho, componente1, componente2, componente3, preco);
	}                                               
	return 0;
}