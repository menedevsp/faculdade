#include <stdio.h>
int main(){
    int numero1, numero2, soma;
    printf("insir o preimeiro numero");
    scanf("%d", &numero1);
    printf("insira o segundo numero");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    printf("a soma dos valores e igual a %d", soma);
    return 0;
}