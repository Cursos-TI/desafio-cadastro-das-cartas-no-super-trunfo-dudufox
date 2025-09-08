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
        int   Populacao1, Populacao2, PontoTuristico1, PontoTuristico2;
        float Area1, Area2, Pib1, Pib2, PerCidade1, PerCidade2, DensiCidade1, DensiCidade2 ;
        
                // Irá solicitar as informações da primeira carta
            printf("\nInsira dos dados da primeira carta");
            printf("\nInsira uma letra de 'A' a 'H', representando um estado: ");
            scanf("%c", &Estado1);

            printf("\nInsira o código da carta sendo iniciado pela letra do estado seguida de um númedo de '01'a '04': ");
            scanf("%s", &CodigoCarta1);

            printf("Digite o nome da cidade: ");
            scanf("%s", &Cidade1);

            printf("Digite a populção desta cidade: ");
            scanf("%d", &Populacao1);

            printf("Digite a área da cidade em quilômetros: ");
            scanf(" %f", &Area1);

            printf("Digite o Pib da cidade: ");
            scanf(" %f", &Pib1);

            printf("Digite a quantidade de pontos turísticos:");
            scanf("%d", &PontoTuristico1);

                //Cáuculo Densidade Cidade Carta 01

                DensiCidade1 = Populacao1 / Area1;

                //Cáuculo Pib Per Capita Cidade Carta 01

                PerCidade1 = Pib1 / Populacao1; 

                // Irá solicitar as inforfmações da segunda carta

            printf("\nInsira dos dados da segunda carta");
            printf("\nInsira uma letra de 'A' a 'H', representando um estado: ");
            scanf(" %c", &Estado2);

            printf("\nInsira o código da carta sendo iniciado pela letra do estado seguida de um númedo de '01'a '04': ");
            scanf("%s", &CodigoCarta2);

            printf("Digite o nome da cidade: ");
            scanf("%s", &Cidade2);

            printf("Digite a populção desta cidade: ");
            scanf("%d", &Populacao2);

            printf("Digite a área da cidade em quilômetros: ");
            scanf(" %f", &Area2);

            printf("Digite o Pib da cidade: ");
            scanf(" %f", &Pib2);

            printf("Digite a quantidade de pontos turísticos:");
            scanf("%d", &PontoTuristico2);

                //Cáuculo Densidade Cidade Carta 02

                DensiCidade2 = Populacao2 / Area2;

                //Cáuculo Pib Per Capita Cidade Carta 02

                PerCidade2 = Pib2 / Populacao2; 

                // Irá exibir as informações da primeira carta

            printf("\nCarta 1:\n");
            printf("Estado: %c\n", Estado1);
            printf("Código: %s\n", CodigoCarta1);
            printf("Nome da Cidade: %s\n", Cidade1);
            printf("População: %d\n", Populacao1);
            printf("Área: %.2f km²\n", Area1);
            printf("Pib: %.2f bilhões de reais\n", Pib1);
            printf("Número de Pontos Turísticos: %d\n", PontoTuristico1);
            printf("Densidade Populacional: %.2f hab/Km²\n", DensiCidade1);
            printf("PIB Per Capita: %f\n", PerCidade1);
            

             // Irá exibir as informações da segunda carta

            printf("\nCarta 2:\n");
            printf("Estado: %c\n", Estado2);
            printf("Código: %s\n", CodigoCarta2);
            printf("Nome da Cidade: %s\n", Cidade2);
            printf("População: %d\n", Populacao2);
            printf("Área: %.2f km²\n", Area2);
            printf("Pib: %.2f bilhões de reais\n", Pib2);
            printf("Número de Pontos Turísticos: %d\n", PontoTuristico2);
            printf("Densidade Populacional: %.2f hab/Km²\n", DensiCidade2);
            printf("PIB Per Capita: %f\n\n", PerCidade2);





    }