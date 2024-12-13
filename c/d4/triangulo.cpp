#include <stdio.h>
int main(){
	char verificacao;
	float lado1, lado2, lado3, angulo1, angulo2, angulo3;
	printf("Voce quer uma verificacao em cm ou angulo?(c - cm; a - angulo): ");
	do{
		scanf(" %c", &verificacao);
		if(verificacao != 'c' && verificacao != 'C' && verificacao != 'a' && verificacao != 'A'){
			printf("Opcao invalida, insira novamente: ");
		}
	}while(verificacao != 'c' && verificacao != 'C' && verificacao != 'a' && verificacao != 'A');
	if(verificacao == 'c' || verificacao == 'C'){
		printf("Insira o valor para o primeiro lado: ");
		scanf("%f", &lado1);
		printf("Insira o valor para o segundo lado: ");
		scanf("%f", &lado2);
		printf("Insira o valor para o terceiro lado: ");
		scanf("%f", &lado3);
		if(lado1 == lado2 && lado1 != lado3 || lado2 == lado3 && lado2 != lado1 || lado1 == lado3 && lado1 != lado2){
			printf("E um triangulo isocelis");
		} else if(lado1 == lado2 && lado2 == lado3){
			printf("E um triangulo equilatero");
		} else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
			printf("E um triangulo escaleno");
		}
	} else {
		printf("Insira o valor para o primeiro angulo: ");
		scanf("%f", &angulo1);
		printf("Insira o valor para o segundo angulo: ");
		scanf("%f", &angulo2);
		printf("Insira o valor para o terceiro angulo: ");
		scanf("%f", &angulo3);
		if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
			printf("E um triangulo acutangulo");
		} else {
			printf("Nao e um triangulo acutangulo");
		}
	}
	return 0;
}