#include <stdio.h>
int main (){
    
    char estado[50], estado2[50], cod[50], cod2[50], cidade[50], cidade2[50];
    int pop, pop2, pt, pt2;
    float area, area2, pib, pib2, denspop1, denspop2, pibpc1, pibpc2;

    printf ("== Cadastre sua primeira Carta ==\n\n");

    //carta 1

    printf ("Estado:  ");
    scanf  (" %s", &estado);
    printf("codigo:  ");
    scanf (" %s", &cod);
    printf ("cidade:  ");
    scanf (" %s", &cidade);
    printf ("Populacao: ");
    scanf (" %d", &pop);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pt);
    printf ("Area por KM: ");
    scanf (" %f", &area);
    printf ("PIB: ");
    scanf("%f", &pib);

    //Operador pra densidade e PIB per capta  
    denspop1 = pop / area;
    pibpc1 = (pib * 1000000)/ pop;

    // imprimir resultados da primeira carta 

    printf ("\n\n == Sua Carta tem == \n\n");


    printf ("Seu Estado é: %s \n", estado);
    printf ("Seu codigo é: %s \n", cod );
    printf ("Sua cidade é: %s \n", cidade);
    printf ("O Numero de população é: %d \n", pop);
    printf ("A cidade tem %d de pontos turisticos \n", pt );
    printf ("Sua cidade tem %.2f km² \n", area);
    printf ("O PIB da sua cidade é de: %.2f \n", pib);
    printf ("A densidade populacional é de: %.2f \n", denspop1);
    printf ("O PIB Percapta é de: %.2f \n\n", pibpc1);
    
    
        //dados para segunda carta
    

    printf ("== Cadastre sua segunda Carta ==\n\n");

    //carta 2

    printf ("Estado:  ");
    scanf  (" %s", &estado2);
    printf("codigo:  ");
    scanf (" %s", &cod2);
    printf ("cidade:  ");
    scanf (" %s", &cidade2);
    printf ("Populacao: ");
    scanf (" %d", &pop2);
    printf ("Pontos turisticos: ");
    scanf (" %d", &pt2);
    printf ("Area por KM: ");
    scanf (" %f", &area2);
    printf ("PIB: ");
    scanf("%f", &pib2);

    //operador apra densidade e PIB per capta

    denspop2 = pop2 / area2;
    pibpc2 = (pib2 *1000000) / pop2;


    // imprimir resultados da segunda carta 

    printf ("\n\n == Sua Carta tem == \n\n");


    printf ("Seu Estado é: %s \n", estado2);
    printf ("Seu codigo é: %s \n", cod2 );
    printf ("Sua cidade é: %s \n", cidade2);
    printf ("O Numero de população é: %d \n", pop2);
    printf ("A cidade tem %d de pontos turisticos \n", pt2 );
    printf ("Sua cidade tem %.2f km² \n", area2);
    printf ("O PIB da sua cidade é de: %.2f \n", pib2);
    printf ("A densidade populacional é de: %.2f \n", denspop2);
    printf ("O PIB Percapta é de : %.2f \n\n", pibpc2);

    

    return 0;
}
