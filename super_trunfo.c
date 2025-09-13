#include <stdio.h>

    int main () {

             /*  Jogo Super Trunfo
            Cadastrar 02 cartas que vão representar cidades
            */

            //variáveis a serem usadas

            char  Estado1, Estado2; 
            char  CodigoCarta1 [6];
            char  CodigoCarta2 [6];
            char  Cidade1 [20];
            char  Cidade2 [20];
            unsigned long int Populacao1, Populacao2;
            int   PontoTuristico1, PontoTuristico2, SomaCarta1=0,SomaCarta2=0;
            float Area1, Area2, Pib1, Pib2, PerCidade1, PerCidade2, DensiCidade1, DensiCidade2, SuperpoderCarta1, SuperpoderCarta2, ResultDens1, ResultDens2 ;
        
                // Irá solicitar as informações da primeira carta
            printf("Insira dos dados da primeira carta\n");
            printf("Insira uma letra de 'A' a 'H', representando um estado: ");
            scanf("%c", &Estado1);

            printf("Insira o código da carta sendo iniciado pela letra do estado seguida de um númedo de '01'a '04': ");
            scanf("%s", &CodigoCarta1);

            printf("Digite o nome da cidade: ");
            scanf("%s", &Cidade1);

            printf("Digite a populção desta cidade: ");
            scanf("%u", &Populacao1);

            printf("Digite a área da cidade em quilômetros: ");
            scanf(" %f", &Area1);

            printf("Digite o Pib da cidade: ");
            scanf(" %f", &Pib1);

            printf("Digite a quantidade de pontos turísticos:");
            scanf("%d", &PontoTuristico1);

                //Somando todos os dados numéricos da carta01

                SuperpoderCarta1 = (float) Populacao1 + Area1 + Pib1 + PontoTuristico1 + PerCidade1 + DensiCidade1;

                //Cáuculo Densidade Cidade Carta 01

                DensiCidade1 = (float) (Populacao1 / Area1);

                //Cáuculo Pib Per Capita Cidade Carta 01

                PerCidade1 = (float) (Pib1 / Populacao1); 
            
                // Irá solicitar as inforfmações da segunda carta

            printf("\nInsira dos dados da segunda carta\n");
            printf("Insira uma letra de 'A' a 'H', representando um estado: ");
            scanf(" %c", &Estado2);

            printf("Insira o código da carta sendo iniciado pela letra do estado seguida de um númedo de '01'a '04': ");
            scanf("%s", &CodigoCarta2);

            printf("Digite o nome da cidade: ");
            scanf("%s", &Cidade2);

            printf("Digite a populção desta cidade: ");
            scanf("%u", &Populacao2);

            printf("Digite a área da cidade em quilômetros: ");
            scanf(" %f", &Area2);

            printf("Digite o Pib da cidade: ");
            scanf(" %f", &Pib2);

            printf("Digite a quantidade de pontos turísticos:");
            scanf("%d", &PontoTuristico2);

                //Somando todos os dados numéricos da carta02

                SuperpoderCarta2 = (float) Populacao2 +Area2 + Pib2 + PontoTuristico2 + PerCidade2;

                //Cáuculo Densidade Cidade Carta 02

                DensiCidade2 = (float)(Populacao2 / Area2);

                //Cáuculo Pib Per Capita Cidade Carta 02

                PerCidade2 = (float) (Pib2 / Populacao2); 
                


            // Transformar densidade carta 01

             ResultDens1 = (float)1/ DensiCidade1;

            // Irá exibir as informações da primeira carta

            printf("\nCarta 1:\n");
            printf("Estado: %c\n", Estado1);
            printf("Código: %s\n", CodigoCarta1);
            printf("Nome da Cidade: %s\n", Cidade1);
            printf("População: %u\n", Populacao1);
            printf("Área: %.2f km²\n", Area1);
            printf("Pib: %.2f bilhões de reais\n", Pib1);
            printf("Número de Pontos Turísticos: %d\n", PontoTuristico1);
            printf("Densidade Populacional: %.2f hab/Km²\n", DensiCidade1);
            printf("PIB Per Capita: R$ %.2f\n", PerCidade1);
            
            // Transformar densidade carta 02

             ResultDens2 = 1/ DensiCidade2;

            // Irá exibir as informações da segunda carta

            printf("\nCarta 2:\n");
            printf("Estado: %c\n", Estado2);
            printf("Código: %s\n", CodigoCarta2);
            printf("Nome da Cidade: %s\n", Cidade2);
            printf("População: %u\n", Populacao2);
            printf("Área: %.2f km²\n", Area2);
            printf("Pib: %.2f bilhões de reais\n", Pib2);
            printf("Número de Pontos Turísticos: %d\n", PontoTuristico2);
            printf("Densidade Populacional: %.2f hab/Km²\n", DensiCidade2);
            printf("PIB Per Capita: R$ %.2f\n\n", PerCidade2);




            printf("Soma total carta 01: %.2f\n", SuperpoderCarta1);
            printf("Soma total carta 02: %.2f\n\n", SuperpoderCarta2);

            // Comparação da população

            printf("*** COMPARAÇÃO DE CARTAS***\n");
            printf("*** 1 é igual a sim 0 é igual a não***\n");
            printf("\n População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
            printf(" Área: Carta 1 venceu (%d)\n", Area1 > Area2);
            printf(" PIB: Carta 1 venceu (%d)\n", Pib1 > Pib2);
            printf(" Pontos Turísticos: Carta 1 venceu (%d)\n", PontoTuristico1 > PontoTuristico2);
            printf(" Densidade Populacional: Carta 1 venceu (%d)\n", ResultDens1 < ResultDens2);
            printf(" PIB Per Capita: Carta 1 venceu (%d)\n", PerCidade1 > PerCidade2);
            printf(" Super Poder: Carta 1 venceu (%d)\n\n", SuperpoderCarta1 > SuperpoderCarta2);

            //printf("Densidade Geográfica Carta 01: %f\n", ResultDens1);
            //printf("Densidade Geográfica Carta 02: %f\n", ResultDens2);

            // Comparações dos atributos das cartas

            // Mostrar comparação População

            printf("\nComparação de cartas (Atributo: População):\n\n");
            
            printf("Carta 1: %s: %u\n", Cidade1,Populacao1);
            printf("Carta 2: %s: %u\n", Cidade2,Populacao2);

            // Comparando a População

                 if (Populacao1 > Populacao2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            // Mostrar comparação Área

            printf("\nComparação de cartas (Atributo: Área):\n\n");
            
            printf("Carta 1: %s: %.2f\n", Cidade1,Area1);
            printf("Carta 2: %s: %.2f\n", Cidade2,Area2);
           
            // Comparando a Área

               if (Area1 > Area2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            // Mostrar comparação do PIB

            printf("\nComparação de cartas (Atributo: PIB):\n\n");
            
            printf("Carta 1: %s: %.2f\n", Cidade1,Pib1);
            printf("Carta 2: %s: %.2f\n", Cidade2,Pib2);

            // Comparando o PIB

               if (Pib1 > Pib2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            // Mostrar comparação Pontos Turísticos

            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n\n");
            
            printf("Carta 1: %s: %d\n", Cidade1,PontoTuristico1);
            printf("Carta 2: %s: %d\n", Cidade2,PontoTuristico2);

            // Comparando os Pontos Turísticos

               if (PontoTuristico1 > PontoTuristico2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            // Mostrar comparação da densidade populacional

            printf("\nComparação de cartas (Atributo: Densidade Populacional):\n\n");
            
            printf("Carta 1: %s: %.2f\n", Cidade1,DensiCidade1);
            printf("Carta 2: %s: %.2f\n", Cidade2,DensiCidade2);
            
            // Comparando a Densidade Populacional

               if (DensiCidade1 < DensiCidade2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            // Mostrar comparação do PIB Per Capita

            printf("\nComparação de cartas (Atributo: PIB Per Capita):\n\n");
            
            printf("Carta 1: %s: R$ %.2f\n", Cidade1,PerCidade1);
            printf("Carta 2: %s: R$ %.2f\n", Cidade2,PerCidade2);

            // Comparando o PIB Per Capita

               if (PerCidade1 > PerCidade2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            // Mostrar comparação do Super Poder

            printf("\nComparação de cartas (Atributo: Super Poder):\n\n");
            
            printf("Carta 1: %s: %.2f\n", Cidade1,SuperpoderCarta1);
            printf("Carta 2: %s: %.2f\n", Cidade2,SuperpoderCarta2);
            
            // Comparando o Super Poder

               if (SuperpoderCarta1 > SuperpoderCarta2){ ++SomaCarta1;
                    printf("Resultado: Carta 1 (%s) Venceu\n\n", Cidade1);
               } else { ++SomaCarta2;
                    printf("Resultado: Carta 2 (%s) Venceu\n\n", Cidade2);
               }

            printf("\n****SOMA TOTAL DOS PONTOS****\n");
            printf("Carta 1: (%s) somou: %d Pontos, Carta 2: (%s) Somou: %d Pontos\n", Cidade1, SomaCarta1, Cidade2, SomaCarta2);
               if (SomaCarta1 > SomaCarta2){
                printf("Vencedor na soma total dos ponts é a Carta 1 Cidade: %s \n", Cidade1);
               } else {
                printf("Vencedor na soma total dos ponts é a Carta 2 Cidade: %s \n", Cidade2);
               }
            
    }