#include <stdio.h>

int main() {
    char continuar, candidato20[50], candidato50[50], candidato99[50], candidato29[50], candidatoNulo[50];
    int opcao, contador = 0, voto, votoTotal = 0, votoBranco = 0, voto20 = 0, voto50 = 0, voto99 = 0, voto29 = 0;
    int votoNulo = 0, votacaoEncerrada = 0, votoMaior1 = 0, votoMaior2 = 0, turno = 1;
    int numeroCandidato1 = 0, numeroCandidato2 = 0;

    do {
        printf("Menu:\n\n");
        if (contador == 0) {
            printf("1 - Cadastrar Candidatos\n");
        }
        printf("2 - Iniciar Votacao\n3 - Encerrar Votacao\n");
        if (votacaoEncerrada == 1) {
            printf("4 - Computar Votos\n");
        }
        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);

        if (contador == 0 && opcao == 1) {
            printf("Insira o nome do candidato 20: ");
            scanf(" %[^\n]s", candidato20);
            printf("Insira o nome do candidato 50: ");
            scanf(" %[^\n]s", candidato50);
            printf("Insira o nome do candidato 99: ");
            scanf(" %[^\n]s", candidato99);
            printf("Insira o nome do candidato 29: ");
            scanf(" %[^\n]s", candidato29);
            printf("Insira o nome do candidato 30 (Nulo): ");
            scanf(" %[^\n]s", candidatoNulo);
            contador = 1000;
        }

        if (opcao == 2 && votacaoEncerrada == 0) {
            do {
                printf("Candidatos:\n\n20 - %s \n50 - %s\n99 - %s \n29 - %s\n30 - %s (Nulo) \n0 - Voto Branco\n\n", candidato20, candidato50, candidato99, candidato29, candidatoNulo);
                printf("Insira o numero de seu candidato: ");
                scanf("%d", &voto);

                if (voto == 20) voto20++;
                else if (voto == 50) voto50++;
                else if (voto == 99) voto99++;
                else if (voto == 29) voto29++;
                else if (voto == 30) votoNulo++;
                else if (voto == 0) votoBranco++;
                else printf("Candidato invalido, insira novamente.\n");

                votoTotal++;

                printf("Deseja continuar a votacao? (s - sim | n - nao): ");
                scanf(" %c", &continuar);

            } while (continuar == 's' || continuar == 'S');
        }

        if (opcao == 3) {
            votacaoEncerrada = (votoTotal > 0) ? 1 : -1;
            printf("Votacao encerrada.\n");
        }

        if (opcao == 4 && votacaoEncerrada == 1) {
            if (turno == 1) {
                printf("Resultado do primeiro turno:\n\n");
                printf("%s - %d votos\n", candidato20, voto20);
                printf("%s - %d votos\n", candidato50, voto50);
                printf("%s - %d votos\n", candidato99, voto99);
                printf("%s - %d votos\n", candidato29, voto29);
                printf("%s (Nulo) - %d votos\n", candidatoNulo, votoNulo);
                printf("Voto Branco - %d votos\n", votoBranco);
                printf("Total de votos: %d\n\n", votoTotal);

                if (voto20 > voto50) {
                    numeroCandidato1 = 20;
                    votoMaior1 = voto20;
                } else {
                    numeroCandidato1 = 50;
                    votoMaior1 = voto50;
                }
                if (voto99 > votoMaior1) {
                    numeroCandidato1 = 99;
                    votoMaior1 = voto99;
                }
                if (voto29 > votoMaior1) {
                    numeroCandidato1 = 29;
                    votoMaior1 = voto29;
                }

                if ((voto20 == votoMaior1 && numeroCandidato1 != 20) || (voto50 == votoMaior1 && numeroCandidato1 != 50) || (voto99 == votoMaior1 && numeroCandidato1 != 99) || (voto29 == votoMaior1 && numeroCandidato1 != 29)) {
                    numeroCandidato2 = numeroCandidato1 == 20 ? (voto50 >= voto99 ? (voto50 >= voto29 ? 50 : 29) : (voto99 >= voto29 ? 99 : 29)) : 20;
                    votoMaior2 = numeroCandidato2 == 20 ? voto20 : (numeroCandidato2 == 50 ? voto50 : (numeroCandidato2 == 99 ? voto99 : voto29));
                } else {
                    turno = 2;
                }
            }

            if (turno == 2) {
                printf("Resultado do segundo turno:\n\n");
                printf("%s - %d votos\n", (numeroCandidato1 == 20 ? candidato20 : (numeroCandidato1 == 50 ? candidato50 : (numeroCandidato1 == 99 ? candidato99 : candidato29))), votoMaior1);
                printf("%s - %d votos\n", (numeroCandidato2 == 20 ? candidato20 : (numeroCandidato2 == 50 ? candidato50 : (numeroCandidato2 == 99 ? candidato99 : candidato29))), votoMaior2);
                printf("Voto Branco - %d\n", votoBranco);

                if (votoMaior1 > votoMaior2) printf("O candidato eleito foi: %s\n", numeroCandidato1 == 20 ? candidato20 : numeroCandidato1 == 50 ? candidato50 : numeroCandidato1 == 99 ? candidato99 : candidato29);
                else printf("O candidato eleito foi: %s\n", numeroCandidato2 == 20 ? candidato20 : numeroCandidato2 == 50 ? candidato50 : numeroCandidato2 == 99 ? candidato99 : candidato29);
                votacaoEncerrada = -1;
            }
        }

        if (opcao < 1 || opcao > 4 || (opcao == 4 && votacaoEncerrada != 1)) printf("Opcao invalida, insira novamente.\n");
        contador++;
    } while (votacaoEncerrada != -1);

    return 0;
}
