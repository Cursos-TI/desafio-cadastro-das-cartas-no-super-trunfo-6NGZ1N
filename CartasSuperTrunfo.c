#include <stdio.h>

    // Jogo de carta super trunfo basico

int main(){

    // Variaveis Carta 1

    char estado1[3]; // sigla do estado
    char codigo1[10]; // Codigo da carta
    char nome1[50]; // Nome do estado da carta
    unsigned long int populacao1; // populaçãp do estado
    float area1; // area do estado
    float pib1; // PIB do estado
    int turismo1; //N de pontos turisticos
    float percapita1; // Pib per capita
    float densidade1; // Desnsidade populacional
    float superPoder1;

        // Variaveis Carta 2

    char estado2[3]; // letra do estado
    char codigo2[10]; // Codigo da carta
    char nome2[50]; // Nome do estado da carta
    unsigned long int populacao2; // populaçãp do estado
    float area2; // area do estado
    float pib2; // PIB do estado
    int turismo2; //N de pontos turisticos
    float percapita2;
    float densidade2;
    float superPoder2;

    //Codigo Para a entrada de dados Padrão

    printf ("Preciso das informacoes da sua carta1"); // a linha printf vai imprimir a mensagem que esta dentro do Parênteses 

    printf ("\nDigite a sigla do estado da carta 1: "); // aqui peço para insirir a Singla do estado, dei o exemplo de SP
    scanf ("%s", estado1); // codigo para dar eceber informação do teclado do usuario do programa

   while ((getchar()) != '\n'); // eu estava tendo problemas com o enter então coloquei esse comando para tirar isso

    printf ("Agora, digite o nome do estado: "); // receber informação
    scanf ("%[^\n]", nome1); // codigo para digitar, porem com uma variante para poder dar espaço no console e escrever noes compostos

    printf ("Necessito do Codigo da Carta1: ");
    scanf ("%s", codigo1);

    printf ("Digite a populacao do estado da Carta1:");
    scanf ("%lu", &populacao1);

    printf ("preciso da area da Carta 1:");
    scanf ("%f", &area1);
    
    printf ("informe o PIB da Carta 1:");
    scanf ("%f", &pib1);

    printf ("Informe o Numero de pontos turisticos da Carta 1:");
    scanf ("%d", &turismo1);

    printf ("Calculando Pib per capita e Densidade Populacional\n");

    // essa é a Carta 2

     printf ("Preciso das informacoes da sua carta2");

    printf ("\nDigite a sigla do estado da carta 2: ");
    scanf ("%s", estado2); 

   while ((getchar()) != '\n');  // tive que usarpor que toda vez que eu dava enter pulava o nome do estado

    printf ("Agora, digite o nome do estado: "); 
    scanf ("%[^\n]", nome2); 

    printf ("Necessito do Codigo da Carta2: ");
    scanf ("%s", codigo2);

    printf ("Digite a populacao do estado da Carta2:");
    scanf ("%lu", &populacao2);

    printf ("preciso da area da Carta 2:");
    scanf ("%f", &area2);
    
    printf ("informe o PIB da Carta 2:");
    scanf ("%f", &pib2);

    printf ("Informe o Numero de pontos turisticos da Carta 2:");
    scanf ("%d", &turismo2);

    printf ("Calculando Pib per capita e Densidade Populacional carta 2\n");

    // Calculo de dados
    
    percapita1 = (float) pib1 / populacao1; // usei o Cast para uma Conversão explicita já que temos valores inteiros e decimais
    densidade1 = (float) populacao1 / area1;

    percapita2 = (float) pib2 / populacao2;
    densidade2 = (float) populacao2 / area2;

    float densidadeInversa1 = 1.0 / densidade1; // resolvi criar essa variante para ficar mais claro no codigo
    float densidadeInversa2 = 1.0 / densidade2;


    superPoder1 = (float)  densidadeInversa1 + populacao1 + area1 + pib1 + turismo1 + percapita1; // calculo do Super Poder
    superPoder2 = (float)  densidadeInversa2  + populacao2 + area2 + pib2 + turismo2 + percapita2 ;

 
    // saida de dados

  printf("-------------------------");
     printf ("\nInformacoes da sua Carta 1");
      printf ("\nSigla: %s - Nome do Estado: %s\n", estado1, nome1);
      printf ("Codigo da Carta: %s\n", codigo1);
      printf ("Area: %f - PIB: %f\n", area1, pib1);
      printf ("Populacao: %lu - Pontos Turistico: %d", populacao1, turismo1);
      printf ("\n Pib per capita: %f - Densidade Populacional: %f", percapita1, densidade1);
      printf ("\n Super Poder: %f ", superPoder1);

    printf ("\nInformacoes da sua Carta 2\n");
      printf ("Sigla: %s - Nome do Estado: %s\n", estado2, nome2);
      printf ("Codigo da Carta: %s\n", codigo2);
      printf ("Area: %f - PIB: %f\n", area2, pib2);
      printf ("Populacao: %lu - Pontos Turistico: %d\n", populacao2, turismo2);
      printf ("\n Pib per capita: %f - Densidade Populacional: %f", percapita2, densidade2);
      printf ("\n Super Poder: %f ", superPoder2);

      // Comparação das Cartas

      printf ("\nComparacao das cartas\n");

      printf ("População: Carta 1  > Carta 2? %d\n", populacao1 >= populacao2);
      printf ("Área: Carta 1  > Carta 2? %d\n", area1 >= area2);
      printf ("PIB: Carta 1  > Carta 2? %d\n", pib1 >= pib2);
      printf ("N-Pontos de Turismo: Carta 1  > Carta 2? %d\n", turismo1 >= turismo2);
      printf ("PIB per capita: Carta 1  > Carta 2? %d\n", percapita1 >= percapita2);
      printf ("Densidade Populacional: Carta 1  < Carta 2? %d\n", densidade1 <= densidade2);
      printf ("Densidade Inversa: Carta 1  > Carta 2? %d\n", densidadeInversa1 >= densidadeInversa2);
      printf ("SUPER PODER: Carta 1  > Carta 2? %d\n", superPoder1 >= superPoder2);

      int resultado = superPoder1 > superPoder2;

      printf ("Resultado: Carta %d venceu!\n",resultado ? 1 : 2);

    printf ("\nFIM!!");
  printf("\n-------------------------");


   return 0;
}