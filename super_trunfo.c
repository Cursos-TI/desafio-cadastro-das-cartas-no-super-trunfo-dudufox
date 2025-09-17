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
            int   PontoTuristico1, PontoTuristico2, SomaCarta1=0,SomaCarta2=0, Opcao;
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

            printf("Atributos:\n");
            printf("1 - População:\n");
            printf("2 - Área:\n");
            printf("3 - PIB:\n");
            printf("4 - Número de Ponto Turísticos:\n");
            printf("5 - Densidade:\n");
            printf("Escolha o atributo a ser comparado: ");
            scanf("%d", &Opcao);
            

            switch (Opcao)
            {
            case 1:
                printf("Comparando o atributo População\n");
                printf("País: Brasil\n");
                if (Populacao1 > Populacao2) {
                    printf("Carta 01: (%s) Venceu Carta 02: (%s)  no atributo População\n", Cidade1 , Cidade2);
                    printf("População carta 01: %u  -  População carta 02: %u\n", Populacao1, Populacao2);
                } else if (Populacao2> Populacao1) {
                    printf("Carta 02: (%s) Venceu Carta 01: (%s)  no atributo População\n", Cidade2, Cidade1);
                    printf("População carta 02: %u  -  População carta 01: %u\n", Populacao2, Populacao1);
                } else {
                    printf("População carta 01: %u  -  População carta 02: %u\n", Populacao1, Populacao2);
                    printf("Houve um Empate\n");
                }
                break;
            case 2:
                printf("Comparando o atributo Área\n");
                printf("País: Brasil\n");
                if (Area1 > Area2) {
                    printf("Carta 01: (%s) Venceu Carta 02: (%s)  no atributo Área\n", Cidade1 , Cidade2);
                    printf("Área carta 01: %.2f  -  Área carta 02: %.2f\n", Area1, Area2);
                } else if (Area2> Area1) {
                    printf("Carta 02: (%s) Venceu Carta 01: (%s)  no atributo Área\n", Cidade2, Cidade1);
                    printf("Área carta 02: %.2f  -  Área carta 01: %.2f\n", Area2, Area1);
                } else {
                    printf("Área carta 01: %.2f  -  Área carta 02: %.2f\n", Area1, Area2);
                    printf("Houve um Empate\n");
                }
                break;
            
            case 3:
                printf("Comparando o atributo PIB\n");
                printf("País: Brasil\n");
                if (Pib1 > Pib2) {
                    printf("Carta 01: (%s) Venceu Carta 02: (%s)  no atributo PIB\n", Cidade1 , Cidade2);
                    printf("PIB carta 01: %.2f  -  PIB carta 02: %.2f\n", Pib1, Pib2);
                } else if (Pib2> Pib1) {
                    printf("Carta 02: (%s) Venceu Carta 01: (%s)  no atributo PIB\n", Cidade2, Cidade1);
                    printf("PIB carta 02: %.2f  -  PIB carta 01: %.2f\n", Pib2, Pib1);
                } else {
                    printf("PIB carta 01: %.2f  -  PIB carta 02: %.2f\n", Pib1, Pib2);
                    printf("Houve um Empate\n");
                }
                break;

              case 4:
                printf("Comparando o atributo Pontos Turísticos\n");
                printf("País: Brasil\n");
                if (PontoTuristico1 > PontoTuristico2) {
                    printf("Carta 01: (%s) Venceu Carta 02: (%s)  no atributo Pontos Turísticos\n", Cidade1 , Cidade2);
                    printf("Pontos Turísticos carta 01: %d  -  Pontos Turísticos carta 02: %d\n", PontoTuristico1, PontoTuristico2);
                } else if (PontoTuristico2> PontoTuristico1) {
                    printf("Carta 02: (%s) Venceu Carta 01: (%s)  no atributo Pontos Turísticos\n", Cidade2, Cidade1);
                    printf("Pontos Turísticos carta 02: %d  -  Pontos Turísticos carta 01: %d\n", PontoTuristico2, PontoTuristico1);
                } else {
                    printf("Pontos Turísticos carta 01: %d  -  Pontos Turísticos carta 02: %d\n", PontoTuristico1, PontoTuristico2);
                    printf("Houve um Empate\n");
                }
                break;

            case 5:
                printf("Comparando o atributo Densidade\n");
                printf("País: Brasil\n");
                if (DensiCidade1 < DensiCidade2) {
                    printf("Carta 01: (%s) Venceu Carta 02: (%s)  no atributo Densidade\n", Cidade1 , Cidade2);
                    printf("Densidade carta 01: %.2f  -  Densidade carta 02: %.2f\n", DensiCidade1, DensiCidade2);
                } else if (DensiCidade2< DensiCidade1) {
                    printf("Carta 02: (%s) Venceu Carta 01: (%s)  no atributo Densidade\n", Cidade2, Cidade1);
                    printf("Densidade carta 02: %.2f  -  Densidade carta 01: %.2f\n", DensiCidade2, DensiCidade1);
                } else {
                    printf("Densidade carta 01: %.2f  -  Densidade carta 02: %.2f\n", DensiCidade1, DensiCidade2);
                    printf("Houve um Empate\n");
                }
                break;
            default:
                break;
            }
          
        return 0;                        
    }