// Guilherme Ferreira Menezes
// Lucas de alguma coisa
#include <stdio.h>
int main() {
    char continuar, candidato20[50], candidato50[50], candidato99[50], candidato29[50], candidatoNulo[50], candidatoMaiorVoto1[50], candidatoMaiorVoto2[50];
    int opcao, contador = 0, voto, votoTotal = 0, votoBranco = 0, voto20 = 0, voto50 = 0, voto99 = 0, voto29 = 0, i = 0, eleitores = 0;
    int votoNulo = 0, votacaoEncerrada = 0, votoMaior1 = 0, votoMaior2 = 0, turno = 1, numeroCandidato1 = 0, numeroCandidato2 = 0;
    do{
    	printf("Menu:\n\n");
        if(contador == 0){
            printf("1 - Cadastrar Candidatos\n");
        }
        printf("2 - Iniciar Votacao\n3 - Encerrar Votacao\n");
        if(votacaoEncerrada == 1){
            printf("4 - Computar Votos\n");
        }
        printf("\nDigite uma opcao: ");
        scanf("%d", &opcao);
        if(contador == 0 && opcao == 1){
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
        if(opcao == 2 && votacaoEncerrada == 0){
            if(turno == 1){
    	       	do{
    	        	do{
	    	        	printf("Candidatos:\n\n20 - %s \n50 - %s\n99 - %s \n", candidato20, candidato50, candidato99);
	    	            printf("29 - %s\n30 - %s (Nulo) \n0 - Voto Branco\n\n", candidato29, candidatoNulo);
						printf("Insira o numero de seu candidato: ");
	    	            scanf("%d", &voto);
	    	            if(voto == 20){
	    	                voto20++;
	    	                votoTotal++;
	    	            }else if(voto == 50){
	    	                voto50++;
	    	                votoTotal++;
	    	            }else if(voto == 99){
	    	                voto99++;
	    	                votoTotal++;
	    	            }else if(voto == 29){
	    	                voto29++;
	    	                votoTotal++;
	    	            }else if(voto == 30){
	    	                votoNulo++;
	    	                votoTotal++;
	    	            }else if(voto == 0){
	    	                votoBranco++;
	    	                votoTotal++;
	    	            } else {
	    	                printf("Candidato invalido, insira novamente.\n");
	    	            }
					}while(voto != 20 && voto != 50 && voto != 99 && voto != 29 && voto != 30 && voto != 0);
    	        	do{
    	                printf("Deseja continuar a votacao?(s - sim | n - nao): ");
    	                scanf(" %c", &continuar);
    	                if(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N'){
    	                    printf("Insira uma opcao valida\n");
    	                }
    	            }while(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');
    	        }while(continuar == 's' || continuar == 'S');
			}
			if(turno == 2){
				votoMaior1 = 0;
				votoMaior2 = 0;
				votoTotal = 0;
				votoBranco = 0;
				do{
					do{
						printf("Candidatos:\n\n%s - %d\n%s - %d\nVoto Branco - 0\n\n", candidatoMaiorVoto1, numeroCandidato1, candidatoMaiorVoto2, numeroCandidato2);
						printf("Insira o numero de seu candidato: ");
						scanf("%d", &voto);
						if(voto == numeroCandidato1){
							votoMaior1++;
							votoTotal++;
						}else if(voto == numeroCandidato2){
							votoMaior2++;
							votoTotal++;
						}else if(voto == 0){
							votoBranco++;
							votoTotal++;
						} else {
							printf("Candidato invalido, insira novamente\n");
						}
					}while(voto != numeroCandidato1 && voto != numeroCandidato2 && voto != 0);
					do{
    	                printf("Deseja continuar a votacao?(s - sim | n - nao): ");
    	                scanf(" %c", &continuar);
    	                if(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N'){
    	                    printf("Insira uma opcao valida\n");
    	                }
    	                if(continuar == 'n' && votoMaior1 == votoMaior2){
    	                	printf("\nPara concluir o segundo turno um candidato deve ter a quantidade de votos superior que a do outro.\n");
    	                	printf("Tanto %s quanto %s tem a mesma quantidade de votos: %d\n\n", candidatoMaiorVoto1, candidatoMaiorVoto2, votoMaior1);
    	                	do{
    	                		printf("%s - %d\n%s - %d\n\nVote em um para desempatar: ", candidatoMaiorVoto1, numeroCandidato1, candidatoMaiorVoto2, numeroCandidato2);
    	                		scanf("%d", &voto);
    	                		if(voto == numeroCandidato1){
    	                			votoMaior1++;
    	                			votoTotal++;
    	                			continuar = 'n';
								}else if(voto == numeroCandidato2){
									votoMaior2++;
									votoTotal++;
									continuar = 'n';
								} else {
									printf("Candidato invalidao, insira novamente\n");
									continuar = 's';
								}
							}while(voto != numeroCandidato1 && voto != numeroCandidato2);
						}
    	            }while(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');
				}while(continuar == 's' || continuar == 'S');
			}
        }
        if(opcao == 3){
            if(votoTotal > 0){
            	votacaoEncerrada = 1;
            	contador = 1000;
			} else {
				contador = -1;
			}
            printf("Votacao encerrada.\n");
        }
        if(contador == 1001 && opcao == 4 && votacaoEncerrada == 1){
            if(turno == 1){
            	printf("Resultado do primeiro turno:\n\n");
	            printf("%s - %d votos\n", candidato20, voto20);
	            printf("%s - %d votos\n", candidato50, voto50);
	            printf("%s - %d votos\n", candidato99, voto99);
	            printf("%s - %d votos\n", candidato29, voto29);
	            printf("%s (Nulo) - %d votos\n", candidatoNulo, votoNulo);
	            printf("Voto Branco - %d votos\n", votoBranco);
	            printf("Total de votos: %d\n\n", votoTotal);
	            if(voto20 > voto50){
	            	votoMaior1 = voto20;
	            	numeroCandidato1 = 20;
	            	do{
	            		candidatoMaiorVoto1[i] = candidato20[i];
	            		i++;
					}while(candidato20[i - 1] != '\0');
					i = 0;
				} else {
					votoMaior1 = voto50;
	            	numeroCandidato1 = 50;
	            	do{
	            		candidatoMaiorVoto1[i] = candidato50[i];
	            		i++;
					}while(candidato50[i - 1] != '\0');
					i = 0;
				}
            	if(voto99 > votoMaior1){
      				do{
            			candidatoMaiorVoto1[i] = candidato99[i];
            			i++;
					}while(candidato99[i - 1] != '\0');
					i = 0;
      				votoMaior1 = voto99;
      				numeroCandidato1 = 99;
    			}
			    if(voto29 > votoMaior1){
			        do{
            			candidatoMaiorVoto1[i] = candidato29[i];
            			i++;
					}while(candidato29[i - 1] != '\0');
					i = 0;
			        votoMaior1 = voto29;
			        numeroCandidato1 = 29;
			    }
			    if(votoMaior1 == voto20 && numeroCandidato1 != 20){
			    	do{
            			candidatoMaiorVoto2[i] = candidato20[i];
            			i++;
					}while(candidato20[i - 1] != '\0');
					i = 0;
			    	votoMaior2 = voto20;
			    	numeroCandidato2 = 20;
				}
				if(votoMaior1 == voto99 && numeroCandidato1 != 99){
			    	do{
            			candidatoMaiorVoto2[i] = candidato99[i];
            			i++;
					}while(candidato99[i - 1] != '\0');
					i = 0;
			    	votoMaior2 = voto99;
			    	numeroCandidato2 = 99;
				}
				if(votoMaior1 == voto50 && numeroCandidato1 != 50){
			    	do{
            			candidatoMaiorVoto2[i] = candidato50[i];
            			i++;
					}while(candidato50[i - 1] != '\0');
					i = 0;
			    	votoMaior2 = voto50;
			    	numeroCandidato2 = 50;
				}
				if(votoMaior1 == voto29 && numeroCandidato1 != 29){
			    	do{
            			candidatoMaiorVoto2[i] = candidato29[i];
            			i++;
					}while(candidato29[i - 1] != '\0');
					i = 0;
			    	votoMaior2 = voto29;
			    	numeroCandidato2 = 29;
				}
				if(votoMaior1 != votoMaior2){
					printf("O candidato eleito foi: %s, com %d votos", candidatoMaiorVoto1, votoMaior1);
					votacaoEncerrada = -1;
				} else {
					printf("Houve um empate entre os candidatos %s e %s, com %d votos cada\n", candidatoMaiorVoto1, candidatoMaiorVoto2, votoMaior1);
					turno = 2;
					votacaoEncerrada = 0;
				}
			}else if(turno == 2){
				printf("Resultado do segundo turno:\n\n");
				printf("%s - %d votos\n", candidatoMaiorVoto1, votoMaior1);
				printf("%s - %d votos\n", candidatoMaiorVoto2, votoMaior2);
				printf("Voto Branco - %d\n", votoBranco);
				printf("Voto Total - %d\n\n", votoTotal);
				if(votoMaior1 > votoMaior2){
					printf("\nO candidato eleito foi: %s, com %d votos\n", candidatoMaiorVoto1, votoMaior1);
				} else {
					printf("\nO candidato eleito foi: %s, com %d votos\n", candidatoMaiorVoto2, votoMaior2);
				}
				votacaoEncerrada = -1;
			}
        }
        if((opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4) || (opcao == 4 && votacaoEncerrada != -1) || (opcao == 1 && contador > 1000) || (opcao == 2 && votacaoEncerrada != 0)){
        	if(opcao == 2){
        		printf("A votacao ja foi encerrada!\n");
			}
        	if(turno == 1){
        		printf("Opcao invalida, insira novamente.\n");
			}
            if (contador < 1000) {
                contador = -1;
            }
        }
        contador++;
    }while(votacaoEncerrada != -1);
    return 0;
}