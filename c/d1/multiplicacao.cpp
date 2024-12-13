#include <stdio.h>
int main(){
    int numero1, numero2, multiplicacao;
    printf("insira o valor para o primeiro numero");
    scanf("%d", &numero1);
    printf("insira o valor para o segundo numero");
    scanf("%d", &numero2);
    multiplicacao = numero1 * numero2;
    printf("a multiplicacao dos valores e igual a %d", multiplicacao);
}