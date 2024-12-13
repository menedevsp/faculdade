#include <stdio.h>
int main(){
    int numero1, numero2, subtracao;
    printf("insira o primeiro valor");
    scanf("%d", &numero1);
    printf("insira o segundo valor");
    scanf("%d", &numero2);
    subtracao = numero1 - numero2;
    printf("a subtracao dos valores e %d", subtracao);
    return 0;
}