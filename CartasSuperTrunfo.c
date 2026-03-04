
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    srand (time(0));
    int maquina;
    char estado[50], estado2[50], cod[50], cod2[50], cidade[50], cidade2[50];
    int pt, pt2, vit1, vit2;
    unsigned long int pop, pop2;
    float area, area2, pib, pib2, denspop1, denspop2, pibpc1, pibpc2, superpoder1, superpoder2, invdens1, invdens2;

    printf ("\n== Cadastre sua primeira Carta ==\n\n");

    //carta 1

    printf ("Estado:  ");
    fgets (estado, 50, stdin); //ler nome com espaços
    estado [strcspn (estado, "\n")] = 0; //remove o enter no final da string
    printf("codigo:  ");
    scanf (" %s", &cod);
    getchar (); //limpa os dados do buffer (Enter)
    printf ("cidade:  ");
    fgets (cidade, 50, stdin); //ler nome com espaços 
    cidade [strcspn (cidade, "\n")] = 0; //remove o enter no final da string
    printf ("Populacao: ");
    scanf (" %lu", &pop);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pt);
    printf ("Area por KM: ");
    scanf (" %f", &area);
    printf ("PIB: ");
    scanf("%f", &pib);
    getchar (); //limpar dados do buffer (Enter)

    //Operador pra densidade e PIB per capta da carta 1

    denspop1 = pop / area;
    pibpc1 = (pib * 1000000)/ pop;
    invdens1 = 1 / denspop1;
    superpoder1 = (float) pop + area + pib + (float)pt + pibpc1 + invdens1;

    //dados para segunda carta
    

    printf ("\n== Cadastre sua segunda Carta ==\n\n");

    //carta 2

    printf ("Estado:  ");
    fgets (estado2, 50, stdin); //ler nome com espaços 
    estado2 [strcspn (estado2, "\n")] = 0; //remove o enter no final da string
    printf("codigo:  ");
    scanf (" %s", &cod2);
    getchar (); //limpa os dados do buffer (Enter)
    printf ("cidade:  ");
    fgets (cidade2, 50, stdin); //ler nome com espaços 
    cidade2 [strcspn (cidade2, "\n")] = 0; //remove o enter no final da string
    printf ("Populacao: ");
    scanf (" %lu", &pop2);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pt2);
    printf ("Area por KM: ");
    scanf (" %f", &area2);
    printf ("PIB: ");
    scanf("%f", &pib2);

    //operador apra densidade e PIB per capta da carta 2

    denspop2 = pop2 / area2;
    pibpc2 = (pib2 *1000000) / pop2;
    invdens2 = 1 / denspop2;
    superpoder2 = (float) pop2 + area2 + pib2 + (float)pt2 + pibpc2 + invdens2;

    // imprimir resultados da primeira carta 

    printf ("\n\n == Sua Carta tem == \n\n");


    printf ("Seu Estado é: %s \n", estado);
    printf ("Seu codigo é: %s \n", cod );
    printf ("Sua cidade é: %s \n", cidade);
    printf ("O Numero de população é: %lu \n", pop);
    printf ("A cidade tem %d de pontos turisticos \n", pt );
    printf ("Sua cidade tem %.2f km² \n", area);
    printf ("O PIB da sua cidade é de R$ %.2f \n", pib);
    printf ("A densidade populacional é de %.2f hab/km²\n", denspop1);
    printf ("O PIB Percapta é de R$ %.2f \n\n", pibpc1);

    // imprimir resultados da segunda carta 

    printf ("\n\n == Sua Carta tem == \n\n");


    printf ("Seu Estado é: %s \n", estado2);
    printf ("Seu codigo é: %s \n", cod2 );
    printf ("Sua cidade é: %s \n", cidade2);
    printf ("O Numero de população é: %lu \n", pop2);
    printf ("A cidade tem %d de pontos turisticos \n", pt2 );
    printf ("Sua cidade tem %.2f km² \n", area2);
    printf ("O PIB da sua cidade é R$ %.2f \n", pib2);
    printf ("A densidade populacional é de %.2f hab/km² \n", denspop2);
    printf ("O PIB Percapta é de R$ %.2f \n\n", pibpc2);

    maquina = rand () % 2 + 1;
    
    //Hora da batalha
    
   printf ("++ Hora do combate ++\n\n");

   switch (maquina)
   {
   case 1:
   
   printf ("A maquina escolheu a carta %s para batalhar\n", estado );
   printf ("O super poder da carta %s é de %.2f de poder\n", estado, superpoder1);

    break;
   
   case 2:
   printf ("A maquina escolher a carta %s para batalhar\n", estado2 );
   printf ("O super poder da carta %s é de %.2f de poder\n", estado2, superpoder2);


    break;

    default:

    printf ("Opção invalida\n");
   }

   if (superpoder1 > superpoder2) {
    printf ("A carta 1 - %s venceu\n", estado);
   }
   else {
    printf ("A carta 2 - %s venceu\n", estado2);
   }


   
   



    return 0;
}
