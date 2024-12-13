#include <stdio.h>

int main(){
    float numero1, numero2, resultado, escolha;
    printf("qual operacao voce ira calcular\n(soma - 1; subtracao - 2; multiplicacao - 3; divisao - 4)");
    scanf("%f", &escolha);
    printf("insira o primeiro valor");
    scanf("%f", &numero1);
    printf("insira o segundo valor");
    scanf("%f", &numero2);
    if(escolha == 1){
        resultado = numero1 + numero2;
        printf("a soma dos valores e igual a %.0f", resultado);
    } else if(escolha == 2){
        resultado = numero1 - numero2;
        printf("a subtracao dos valores e %.0f", resultado);
    } else if(escolha == 3){
        resultado = numero1 * numero2;
        printf("a multiplicacao dos valores e igual a %.0f", resultado);
    } else if(escolha == 4){
        if(numero1 == 0){
            printf("numero de dividendo invalido, insira novamente");
            scanf("%f", &numero1);
        }
        if(numero1 == 0){
            printf("numero de divisor invalido, insira novamente");
            scanf("%f", &numero2);
        }
        resultado = numero1/numero2;
        printf("a valor da divisao e %.2f", resultado);
    }
    return 0;
}