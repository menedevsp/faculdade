// Guilherme Ferreira Menezes
#include <stdio.h>
int main(){
	int opcao, candidato20, candidato50, candidato99, candidato29;
	do{
		printf("Menu\n\n1 - Cadastrar Candidatos\n2 - Iniciar Votacao\n3 - Encerrar Votacao\n4 - Computar Votos\n\nDigite uma opcao: ");
		scanf("%d", &opcao);
	}while(opcao != 3);
	return 0;
}