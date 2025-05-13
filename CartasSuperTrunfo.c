#include <stdio.h>

    // Jogo de carta super trunfo basico

int main(){

    // Variaveis Carta 1

    char estado1[3]; // sigla do estado
    char codigo1[10];
    char nome1[50]; // codigo da carta e nome do estado da carta
    int populacao1; // populaçãp do estadp
    float area1; // area do estado
    float pib1; // PIB do estado
    int turismo1; //N de pontos turisticos

        // Variaveis Carta 2

    char estado2[3]; // letra do estado
    char codigo2[10];
    char nome2[50]; // codigo da carta
    int populacao2; // populaçãp do estadp
    float area2; // area do estado
    float pib2; // PIB do estado
    int turismo2; //N de pontos turisticos

    //Codigo Para a entrada de dados Padrão

    printf ("Preciso das informacoes da sua carta1"); // a linha printf vai imprimir a mensagem que esta dentro do Parênteses 

    printf ("\nDigite a sigla do estado da carta 1: ex:SP"); // aqui peço para insirir a Singla do estado, dei o exemplo de SP
    scanf ("%s", estado1); // codigo para dar eceber informação do teclado do usuario do programa

   while ((getchar()) != '\n'); // eu estava tendo problemas com o enter então coloquei esse comando para tirar isso

    printf ("Agora, digite o nome do estado: ex: Sao Paulo"); // receber informação
    scanf ("%[^\n]", nome1); // codigo para digitar, porem com uma variante para poder dar espaço no console e escrever noes compostos

    printf ("Necessito do Codigo da Carta1: Ex:SP00");
    scanf ("%s", codigo1);

    printf ("Digite a populacao do estado da Carta1:");
    scanf ("%d", &populacao1);

    printf ("preciso da area da Carta 1:");
    scanf ("%f", &area1);
    
    printf ("informe o PIB da Carta 1:");
    scanf ("%f", &pib1);

    printf ("Informe o Numero de pontos turisticos da Carta 1:");
    scanf ("%d", &turismo1);

    // essa é a Carta 2

     printf ("Preciso das informacoes da sua carta2");

    printf ("\nDigite a sigla do estado da carta 2: ex: RJ");
    scanf ("%s", estado2); 

   while ((getchar()) != '\n'); 

    printf ("Agora, digite o nome do estado: ex: Rio de Janeio"); 
    scanf ("%[^\n]", nome2); 

    printf ("Necessito do Codigo da Carta2: Ex:RJ10");
    scanf ("%s", codigo2);

    printf ("Digite a populacao do estado da Carta2:");
    scanf ("%d", &populacao2);

    printf ("preciso da area da Carta 2:");
    scanf ("%f", &area2);
    
    printf ("informe o PIB da Carta 2:");
    scanf ("%f", &pib2);

    printf ("Informe o Numero de pontos turisticos da Carta 2:");
    scanf ("%d", &turismo2);
 
    // saida de dados

  printf("-------------------------");
     printf ("\nInformacoes da sua Carta 1");\
      printf ("\nSigla: %s - Nome do Estado: %s\n", estado1, nome1);
      printf ("Codigo da Carta: %s\n", codigo1);
      printf ("Area: %f - PIB: %f\n", area1, pib1);
      printf ("Populacao: %d - Pontos Turistico: %d", populacao1, turismo1);

    printf ("\nInformacoes da sua Carta 2");
      printf ("Sigla: %s - Nome do Estado: %s\n", estado2, nome2);
      printf ("Codigo da Carta: %s\n", codigo2);
      printf ("Area: %f - PIB: %f\n", area2, pib2);
      printf ("Populacao: %d - Pontos Turistico: %d\n", populacao2, turismo2);


    printf ("FIM!!");
  printf("\n-------------------------");
   return 0;
}