#include <stdio.h>
int main(){
	int numero = 0;
	char escolha;
	do{
		printf("repeticoes: %d\nDeseja encerrar?(s - sim; qualquer outra tecla - nao) ", numero);
		scanf(" %c", &escolha);
		numero++;
	}while(escolha == 's' || escolha == 'S');
	return 0;
}