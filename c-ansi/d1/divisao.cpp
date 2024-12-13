#include <stdio.h>
int main(){
    float numero1, numero2, divisao;
    printf("insira o numero que vai ser dividido");
    scanf("%f", &numero1);
    if(numero1 == 0){
        printf("numero invalido, insira novamente");
        scanf("%f", &numero1);
    }
    printf("insira o numero que vai dividir");
    scanf("%f", &numero2);
    if(numero1 == 0){
        printf("numero invalido, insira novamente");
        scanf("%f", &numero2);
    }
    divisao = numero1 / numero2;
    printf("a valor da divisao e %.2f", divisao);
    return 0;
}