//Guilherme Ferreira Menezes
//Lucas Gonves Fonseca
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char candidato20[50], candidato50[50], candidato99[50], candidato29[50], candidatoMaiorVoto1[50], candidatoMaiorVoto2[50], senha[50], teste[50], confirma, opcao;
    int voto, votoTotal = 0, votoBranco = 0, voto20 = 0, voto50 = 0, voto99 = 0, voto29 = 0, eleitores = 0, i = 0, votacaoIniciada = 0, cadastro = 0;
    int votoNulo = 0, votacaoEncerrada = 0, votoMaior1 = 0, votoMaior2 = 0, turno = 1, numeroCandidato1 = 0, numeroCandidato2 = 0;
    printf("URNA ELEITORAL\n\n");    
	printf("Cadastre uma senha para a urna: ");
	scanf(" %[^\n]s", &senha);
	system("cls");
    do{
        printf("O numero de eleitores ultrapassa 200 mil?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
        scanf(" %c", &confirma);
        if(confirma != '1' && confirma != '2'){
            printf("Insira uma opcao valida\n");
        }
        if(confirma == '1'){
        	eleitores = 1;
		}
    }while(confirma != '1' && confirma != '2');
    system("cls");
	do{
		printf("Menu:\n--------------------------------\n");
        printf("1 - Cadastrar Candidatos\n2 - Iniciar Votacao\n3 - Encerrar Votacao\n4 - Computar Votos\n0 - Encerrar programa\n");
        printf("--------------------------------\n");
        printf("Digite uma opcao: ");
        scanf(" %c", &opcao);
        system("cls");
        switch(opcao){
        	case '0':{
        		do{
	        		printf("Voce tem certeza de que deseja encerrar o programa?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			        scanf(" %c", &confirma);
			        if(confirma != '1' && confirma != '2'){
			            printf("Insira uma opcao valida\n");
			        }
			        if(confirma == '1'){
			        	printf("Insira a senha para continuar: ");
			        	scanf(" %[^\n]s", &teste);
			        	if(strcmp(teste, senha) == 0){
			        		printf("Sistema encerrado!");
			        		votacaoEncerrada = -1;
						} else {
							printf("Senha invalida!\n");
						}
					}
			    }while(confirma != '1' && confirma != '2');
				break;
			}
        	case '1':{
        		printf("Insira a senha para continuar: ");
        		scanf(" %[^\n]s", &teste);
        		if(strcmp(teste, senha) == 0){
        			if(turno == 1){
        				printf("Acesso liberado!\n");
	        			do{
	        				printf("Insira o nome do candidato 20: ");
			            	scanf(" %[^\n]s", candidato20);
			            	printf("Confirma esse nome?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			            	scanf(" %c", &confirma);
						}while(confirma != '1');
						do{
	        				printf("Insira o nome do candidato 50: ");
			            	scanf(" %[^\n]s", candidato50);
			            	printf("Confirma esse nome?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			            	scanf(" %c", &confirma);
						}while(confirma != '1');
						do{
	        				printf("Insira o nome do candidato 99: ");
			        	    scanf(" %[^\n]s", candidato99);
			            	printf("Confirma esse nome?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			            	scanf(" %c", &confirma);
						}while(confirma != '1');
						do{
	        				printf("Insira o nome do candidato 29: ");
							scanf(" %[^\n]s", candidato29);
			            	printf("Confirma esse nome?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			            	scanf(" %c", &confirma);
						}while(confirma != '1');
						cadastro = 1;
			            system("cls");
					} else {
						printf("Os candidatos ja estao cadastrados\n");
					}
				} else {
					printf("Senha invalida, acesso negado!\n");
				}
				break;
			}
			case '2':{
				printf("Insira a senha para continuar: ");
				scanf(" %[^\n]s", &teste);
				if(strcmp(teste, senha) == 0){
					printf("Acesso liberado!\n");
					if(cadastro == 1){
						if(turno == 1){
							votacaoIniciada = 1;
			    	       	do{
			    	        	do{
				    	        	printf("Insira o numero de seu candidato: ");
				    	            scanf("%d", &voto);
				    	            if(voto < 10 || voto > 99){
				    	            	printf("Insira apenas dois digitos!\n");
				    	        	} else {
				    	            	switch(voto){
					    	            	case 20:{
					    	            		do{
						    	                	printf("Confirma seu voto em  %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
						    	                	scanf(" %c", &confirma);
						    	                	if(confirma != '1' && confirma != '2'){
							    	                    printf("Insira uma opcao valida\n");
							    	                }
							    	            }while(confirma != '1' && confirma != '2');
						    	                if(confirma == '1'){
						    	                	voto20++;
						    	                	votoTotal++;
						    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
												}
												break;
											}
											case 50:{
												do{
						    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
						    	                	scanf(" %c", &confirma);
						    	                	if(confirma != '1' && confirma != '2'){
							    	                    printf("Insira uma opcao valida\n");
							    	                }
							    	            }while(confirma != '1' && confirma != '2');
						    	                if(confirma == '1'){
						    	                	voto50++;
						    	                	votoTotal++;
						    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
												}
												break;
											}
											case 99:{
												do{
						    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
						    	                	scanf(" %c", &confirma);
						    	                	if(confirma != '1' && confirma != '2'){
							    	                    printf("Insira uma opcao valida\n");
							    	                }
							    	            }while(confirma != '1' && confirma != '2');
						    	                if(confirma == '1'){
						    	                	voto99++;
						    	                	votoTotal++;
						    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
												}
												break;
											}
											case 29:{
												do{
						    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
						    	                	scanf(" %c", &confirma);
						    	                	if(confirma != '1' && confirma != '2'){
							    	                    printf("Insira uma opcao valida\n");
							    	                }
							    	            }while(confirma != '1' && confirma != '2');
						    	                if(confirma == '1'){
						    	                	voto29++;
						    	                	votoTotal++;
						    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
												}
												break;
											}
											case 0:{
												do{
						    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
						    	                	scanf(" %c", &confirma);
						    	                	if(confirma != '1' && confirma != '2'){
							    	                    printf("Insira uma opcao valida\n");
							    	                }
							    	            }while(confirma != '1' && confirma != '2');
						    	                if(confirma == '1'){
						    	                	votoBranco++;
						    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
												}
												break;
											}
											default:{
												do{
						    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
						    	                	scanf(" %c", &confirma);
						    	                	if(confirma != '1' && confirma != '2'){
							    	                    printf("Insira uma opcao valida\n");
							    	                }
							    	            }while(confirma != '1' && confirma != '2');
						    	                if(confirma == '1'){
						    	                	votoNulo++;
						    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
												}
												break;
											}
										}
									}
								}while(confirma == '2');
			    	        	do{
			    	                printf("Deseja continuar a votacao?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			    	                scanf(" %c", &confirma);
			    	                if(confirma != '1' && confirma != '2'){
			    	                    printf("Insira uma opcao valida\n");
			    	                }
			    	            }while(confirma != '1' && confirma != '2');
			    	            system("cls");
			    	        }while(confirma == '1');
						}
						if(turno == 2){
							votacaoIniciada = 1;
							votoMaior1 = 0;
							votoMaior2 = 0;
							votoTotal = 0;
							votoBranco = 0;
							votoNulo = 0;
							do{
								do{
				    	        	printf("Insira o numero de seu candidato: ");
				    	            scanf("%d", &voto);
				    	            if(voto < 10 || voto > 99){
				    	            	printf("Insira apenas dois digitos!\n");
									} else {
										if(voto == numeroCandidato1){
											do{
					    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
					    	                	scanf(" %c", &confirma);
					    	                	if(confirma != '1' && confirma != '2'){
						    	                    printf("Insira uma opcao valida\n");
						    	                }
						    	            }while(confirma != '1' && confirma != '2');
					    	                if(confirma == '1'){
					    	                	votoMaior1++;
					    	                	votoTotal++;
					    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
											}
										} else if(voto == numeroCandidato2){
											do{
					    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
					    	                	scanf(" %c", &confirma);
					    	                	if(confirma != '1' && confirma != '2'){
						    	                    printf("Insira uma opcao valida\n");
						    	                }
						    	            }while(confirma != '1' && confirma != '2');
					    	                if(confirma == '1'){
					    	                	votoMaior2++;
					    	                	votoTotal++;
					    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
											}
										} else if(voto == 0){
											do{
					    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
					    	                	scanf(" %c", &confirma);
					    	                	if(confirma != '1' && confirma != '2'){
						    	                    printf("Insira uma opcao valida\n");
						    	                }
						    	            }while(confirma != '1' && confirma != '2');
					    	                if(confirma == '1'){
					    	                	votoBranco++;
					    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
											}
										} else {
											do{
					    	                	printf("Confirma seu voto em %d?\nPrecione:\n\n1 para CONFIRMAR\n2 para CORRIGIR\n\n: ", voto);
					    	                	scanf(" %c", &confirma);
					    	                	if(confirma != '1' && confirma != '2'){
						    	                    printf("Insira uma opcao valida\n");
						    	                }
						    	            }while(confirma != '1' && confirma != '2');
					    	                if(confirma == '1'){
					    	                	votoNulo++;
					    	                	printf("Obrigado por votar, seu voto foi registrado com sucesso!\n");
											}
										}
									}
								}while(confirma == '2');
								do{
			    	                printf("Deseja continuar a votacao?\nPrecione:\n\n1 para SIM\n2 para NAO\n\n: ");
			    	                scanf(" %c", &confirma);
			    	                if(confirma != '1' && confirma != '2'){
			    	                    printf("Insira uma opcao valida\n");
			    	                }
			    	            }while(confirma != '1' && confirma != '2');
			    	            system("cls");
							}while(confirma == '1');
						}
					} else {
						printf("Os candidatos precisam ser cadastrados!\n");
					}
				} else {
					printf("Senha invalida, acesso negado!\n");
				}
				break;
			}
			case '3':{
				printf("Insira a senha para continuar: ");
        		scanf(" %[^\n]s", &teste);
        		if(strcmp(teste, senha) == 0){
        			if( votacaoIniciada == 1){
        				votacaoEncerrada = 1;
        				printf("Voracao encerrada!\n");
					} else {
						printf("A votacao precisa ser iniciada!\n");
					}
				} else {
					printf("Senha invalida, acesso negado!\n");
				}
				break;
			}
			case '4':{
				if(votacaoEncerrada == 1){
					printf("Insira a senha: ");
					scanf(" %[^\n]s", &teste);
					if(strcmp(teste, senha) == 0){
						printf("Acesso liberado!\n");
						if(turno == 1){
							printf("Resultado do primeiro turno:\n\n");
				            printf("%s - %d%% dos votos\n", candidato20, (voto20*100)/votoTotal);
				            printf("%s - %d%% dos votos\n", candidato50, (voto50*100)/votoTotal);
				            printf("%s - %d%% dos votos\n", candidato99, (voto99*100)/votoTotal);
				            printf("%s - %d%% dos votos\n", candidato29, (voto29*100)/votoTotal);
				            printf("Voto Branco - %d votos\n", votoBranco);
				            printf("Voto Nulo - %d votos\n", votoNulo);
				            printf("Total de votos validos: %d\n\n", votoTotal);
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
						    if(votoMaior1 > votoTotal/2 || eleitores == 0){
						    	if(eleitores == 0 && votoMaior1 == votoMaior2){
						    		do{
										printf("Qual candidato e o mais velho?\nPrecione:\n\n1 - %s\n2 - %s\n\n: ", candidatoMaiorVoto1, candidatoMaiorVoto2);
										scanf(" %c", &confirma);
										if(confirma != '1' && confirma != '2'){
											printf("Insira uma opcao valida!\n");
										}
										if(confirma == '1'){
											printf("\nO candidato eleito foi:\n%d - %s, com %d%% dos votos\n", numeroCandidato1, candidatoMaiorVoto1, (votoMaior1*100)/votoTotal);
										} else if(confirma == '2'){
											printf("\nO candidato eleito foi:\n%d - %s, com %d%% dos votos\n", numeroCandidato2, candidatoMaiorVoto2, (votoMaior2*100)/votoTotal);
										}
									}while(confirma != '1' && confirma != '2');
								} else {
									printf("O candidato eleito foi: %s de numero %d, com %d votos\n", candidatoMaiorVoto1, numeroCandidato1, votoMaior1);
								}
							} else {
								printf("Nenhum candidato obteve a maioria absoluta dos votos validos no primeiro turno.\n");
								printf("O segundo turno sera realizado entre os candidatos:\n");
								printf("%d - %s\n%d - %s", numeroCandidato1, candidatoMaiorVoto1, numeroCandidato2, candidatoMaiorVoto2);
								turno = 2;
								votacaoEncerrada = 0;
								votacaoIniciada = 0;
							}
						} else if(turno == 2){
							printf("Resultado do segundo turno:\n\n");
							printf("%s - %d%% votos\n", candidatoMaiorVoto1, (votoMaior1*100)/votoTotal);
							printf("%s - %d%% votos\n", candidatoMaiorVoto2, (votoMaior2*100)/votoTotal);
							printf("Voto Branco - %d votos\n", votoBranco);
							printf("Voto Nulo - %d votos\n", votoNulo);
							printf("Total de votos validos - %d\n\n", votoTotal);
							if(votoMaior1 > votoTotal/2){
								printf("\nO candidato eleito foi:\n%d - %s, com %d%% dos votos\n", numeroCandidato1, candidatoMaiorVoto1, (votoMaior1*100)/votoTotal);
							} else if(votoMaior2 > votoTotal/2){
								printf("\nO candidato eleito foi:\n%d - %s, com %d%% dos votos\n", numeroCandidato2, candidatoMaiorVoto2, (votoMaior2*100)/votoTotal);
							} else {
								do{
									printf("Qual candidato e o mais velho?\nPrecione:\n\n1 - %s\n2 - %s\n\n: ", candidatoMaiorVoto1, candidatoMaiorVoto2);
									scanf(" %c", &confirma);
									if(confirma != '1' && confirma != '2'){
										printf("Insira uma opcao valida!\n");
									}
									if(confirma == '1'){
										printf("\nO candidato eleito foi:\n%d - %s, com %d%% dos votos\n", numeroCandidato1, candidatoMaiorVoto1, (votoMaior1*100)/votoTotal);
									} else if(confirma == '2'){
										printf("\nO candidato eleito foi:\n%d - %s, com %d%% dos votos\n", numeroCandidato2, candidatoMaiorVoto2, (votoMaior2*100)/votoTotal);
									}
								}while(confirma != '1' && confirma != '2');
							}
							turno = 1;
							votacaoEncerrada = 0;
							votacaoIniciada = 0;
							cadastro = 0;
							printf("Urna resetada!\n");
						}
					} else {
						printf("Senha invalida, acesso negado!\n");
					}
				} else {
					printf("A votacao precisa ser encerrada para que os votos sejam computados!\n");
				}
				break;
			}
			default:{
				printf("Opcao invalida, insira novamente\n");
				break;
			}
		}
	}while(votacaoEncerrada != -1);
}