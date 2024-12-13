#include <stdio.h>
int main(){
	float idade, renda;
	printf("insira sua idade: ");
	scanf("%f", &idade);
	printf("insira sua renda: ");
	scanf("%f", &renda);
	if(idade >= 18 && renda >= 2000){
		printf("cartão aprovado");
	} else {
		printf("cartao recusado");
	}
	return 0;
}