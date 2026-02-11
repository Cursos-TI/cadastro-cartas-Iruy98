#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   char estado[50], estado2[50], cod[50], cod2[50], cidade[50], cidade2[50];
    int pop, pop2, pt, pt2;
    float area, area2, pib, pib2;
 // Área para entrada de dados
   printf ("== Cadastre sua primeira Carta ==\n\n");

    //carta 1

    printf ("Estado:  ");
    scanf  (" %s", &estado);
    printf("Codigo:  ");
    scanf (" %s", &cod);
    printf ("Cidade:  ");
    scanf (" %s", &cidade);
    printf ("Populacao: ");
    scanf (" %d", &pop);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pt);
    printf ("Area por KM: ");
    scanf (" %f", &area);
    printf ("PIB: ");
    scanf("%f", &pib);
  
printf ("\n\n== Cadastre sua segunda Carta ==\n\n");

    //carta 2

    printf ("Estado:  ");
    scanf  (" %s", &estado2);
    printf("Codigo:  ");
    scanf (" %s", &cod2);
    printf ("Cidade:  ");
    scanf (" %s", &cidade2);
    printf ("Populacao: ");
    scanf (" %d", &pop2);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pt2);
    printf ("Area por KM: ");
    scanf (" %f", &area2);
    printf ("PIB: ");
    scanf("%f", &pib2);
  
  // Área para exibição dos dados da cidade

  // imprimir resultados da primeira carta 

    printf ("\n\n == Sua Carta tem == \n\n");


    printf ("Seu Estado é: %s \n", estado);
    printf ("Seu codigo é: %s \n", cod );
    printf ("Sua cidade é: %s \n", cidade);
    printf ("O Numero de população é: %d \n", pop);
    printf ("A cidade tem %d de pontos turisticos \n", pt );
    printf ("Sua cidade tem %f quadrados \n", area);
    printf ( "O PIB da sua cidade é de: %f \n\n", pib);

  // imprimir resultados da segunda carta 

    printf ("\n\n == Sua Carta tem == \n\n");


    printf ("Seu Estado é: %s \n", estado2);
    printf ("Seu codigo é: %s \n", cod2 );
    printf ("Sua cidade é: %s \n", cidade2);
    printf ("O Numero de população é: %d \n", pop2);
    printf ("A cidade tem %d de pontos turisticos \n", pt2 );
    printf ("Sua cidade tem %f metros quadrados \n", area2);
    printf ( "O PIB da sua cidade é de: %f \n\n", pib2);

  

return 0;
} 
