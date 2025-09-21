#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main () {

             /*  Jogo Super Trunfo
            Cadastrar 02 cartas que vão representar cidades
            */

            //variáveis a serem usadas

            char  Estado1='A', Estado2='B', OpcaoMenu; 
            char  CodigoCarta1 [5]="A01";
            char  CodigoCarta2 [5]="B03";
            char  Cidade1 [10]="Maceió";
            char  Cidade2 [10]="Salvador";
            char  Atributoescolhido1 [15];
            char  Atributoescolhido2 [15];
            unsigned long int Populacao1, Populacao2;
            int   PontoTuristico1, PontoTuristico2, SomaCarta1=0, SomaCarta2=0, OpcaoAtributo1, OpcaoAtributo2, Resultado1, Resultado2;
            float Area1, Area2, Pib1, Pib2, PerCidade1, PerCidade2, DensiCidade1, DensiCidade2, SomaResultado1, SomaResultado2, ResultDens1, ResultDens2 ;
        
            srand(time(0));

            // Os atributos da carta 1 serão escolhidos aleatóriamente pelo computador
            
            Populacao1 = rand() % 2564204 +1 ;
            Area1 = rand() % 6938 +1 ;
            Pib1 = rand() % 62954 +1 ;
            PontoTuristico1 = rand() % 100 +1 ;

          
            //Cáuculo Densidade Cidade Carta 01

            DensiCidade1 = (float) (Populacao1 / Area1);

            //Cáuculo Pib Per Capita Cidade Carta 01

            PerCidade1 = (float) (Pib1 / Populacao1); 
            
            
           // Os atributos da carta 2 serão escolhidos aleatóriamente pelo computador

            Populacao2 = rand() % 2564204 +1 ;
            Area2 = rand() % 6938 +1 ;
            Pib2 = rand() % 62954 +1 ;
            PontoTuristico2 = rand() % 100 +1 ;

             
            //Cáuculo Densidade Cidade Carta 02

            DensiCidade2 = (float)(Populacao2 / Area2);

            //Cáuculo Pib Per Capita Cidade Carta 02

            PerCidade2 = (float) (Pib2 / Populacao2); 

            // Transformar densidade carta 01

            ResultDens1 = (float)1/ DensiCidade1;

            // Transformar densidade carta 02

            ResultDens2 = 1/ DensiCidade2;
            
            //Menu Jogo

            printf("\n****** Bem vindo ao Jogo Super Trunfo ******\n");
            printf("******    Menu - Escolha sua Opção    ******\n");
            printf("R - Regras dos Jogo\n");
            printf("J - Jogar\n");
            printf("S - Sair do Jogo\n");
            printf("\nQual opção você escolhe:");
            scanf("%c", &OpcaoMenu);


            switch (OpcaoMenu)
            {
            case 'R':// Caso o usuário escolha ver as Regras do Jogo
            case 'r':
                printf("****************************************************************************************************************\n");
                printf("** Jogo de comparação de atributos(População, Pib etc...) entre cartas(Representadas por cidades) de um país. **\n");
                printf("** Em todos os atributos vence a carta com maior valor, exceto no atributo densidade.                         **\n");
                printf("** Será somado um ponto para cada atributo vencedor.                                                          **\n");
                printf("** Caso seja empate o número de pontos será somado os valores dos atributos para saber o vencedor.            **\n");
                printf("****************************************************************************************************************\n");
                break;
            
            case 'J':// Caso o usuário escolha Jogar
            case 'j':
                // Irá escolher o primeiro de dois atributos
                printf("\n******Bem vindo ao Jogo Super Trunfo******\n");
                printf("Escolha do primeito atributo\n\n");
                printf("1 - População:\n");
                printf("2 - Área:\n");
                printf("3 - PIB:\n");
                printf("4 - Número de Ponto Turísticos:\n");
                printf("5 - Densidade:\n");
                printf("6 - Per Capita:\n");
                printf("\nEscolha o atributo a ser comparado:");
                scanf("%d", &OpcaoAtributo1);

                switch (OpcaoAtributo1) // Início do Swtich primeira atribuição
                {
                case 1:
                    printf("\nVocê escolheu o atributo: População\n");    
                    Resultado1 = Populacao1 > Populacao2 ? 1:0;
                    break;

                case 2:
                    
                    printf("\nVocê escolheu o atributo: Área\n");
                    Resultado1 = Area1 > Area2 ? 1:0;
                    break;
                
                case 3:
                    
                    printf("\nVocê escolheu o atributo: PIB\n");
                    Resultado1 = Pib1 > Pib2 ? 1:0;
                    break;

                case 4:
                    
                    printf("\nVocê escolheu o atributo: Pontos turísticos\n");
                    Resultado1 = PontoTuristico1 > PontoTuristico2 ? 1:0;
                    break;

                case 5:
                    
                    printf("\nVocê escolheu o atributo: Densidade\n");
                    Resultado1 = DensiCidade1 < DensiCidade2 ? 1:0;
                    break;

                case 6:
                    
                    printf("\nVocê escolheu o atributo: Per Capita\n");
                    Resultado1 = PerCidade1 > PerCidade2 ? 1:0;
                    break;


                    
                
            
                default:
                    printf("Opção Inválida\n");
                    break;          // Fim do Swtich primeira atribuição

                    

                }
                       
               // Irá escolher o segundo atributo

                printf("Escolha do segundo atributo:");
                printf("\n1 - População:\n");
                printf("2 - Área:\n");
                printf("3 - PIB:\n");
                printf("4 - Número de Ponto Turísticos:\n");
                printf("5 - Densidade:\n");
                printf("6 - Per Capita:\n");
                printf("\nEscolha o segundo atributo: ");
                scanf("%d", &OpcaoAtributo2);

                if (OpcaoAtributo1 == OpcaoAtributo2){
                    printf("\nVocê escolheu o mesmo atributo inicie novamente o jogo\n");
                } else  switch (OpcaoAtributo2)
                {
                case 1:
                    
                    printf("Você escolheu o atributo: População\n");
                    Resultado2 = Populacao1 > Populacao2 ? 1:0;
                    break;

                case 2:
                    
                    printf("Você escolheu o atributo: Área\n");
                    Resultado2 = Area1 > Area2 ? 1:0;
                    break;
                
                case 3:
                    
                    printf("Você escolheu o atributo: PIB\n");
                    Resultado2 = Pib1 > Pib2 ? 1:0;
                    break;

                case 4:
                    
                    printf("Você escolheu o atributo: Pontos turísticos\n");
                    Resultado2 = PontoTuristico1 > PontoTuristico2 ? 1:0;
                    break;

                case 5:
                    
                    printf("Você escolheu o atributo: Densidade\n");
                    Resultado2 = DensiCidade1 < DensiCidade2 ? 1:0;
                    break;

                case 6:
                    
                    printf("Você escolheu o atributo: Per Capita\n");
                    Resultado2 = PerCidade1 > PerCidade2 ? 1:0;
                    break;
                
                

                    default:
                    printf("Opção Inválida");
                    break;

                    
                }  

                // Comparação das cartas

                if (Resultado1 && Resultado2 == 1 ){
                    printf("Parabéns Você Venceu!!!\n");
                } else if (Resultado1 != Resultado2){
                    printf("Empatou\n");
                } else {
                    printf("Você Perdeu\n");
                }

                
                break;
            case 'S':// Caso o usuário escolha Sair do Jogo
            case 's':
                printf("Saindo do Jogo");
                break;

                default:
                printf("Opção Inválida\n");
                break;

                }

                                 

                
                

    }

            

            

