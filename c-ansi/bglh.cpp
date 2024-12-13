#include <stdio.h>
int main(){
	char nome[50];
	double salario, vendas, total;
	scanf(" %s %lf %lf", &nome, &salario, &vendas);
	total = salario + (vendas*15/10);
	printf("TOTAL = %.2lf", total);
	return 0;
}