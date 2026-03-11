/////BIBLIOTECAS A SEREM UTILIZADAS//////

#include <stdio.h>
#include <string.h>

int main (){

    ////// iNSERINDO AS VARIVEIS PARA CADASTRO DAS CARTAS //////

    char estado[50], codigo[50], cidade[50];
    char estado2[50], codigo2[50], cidade2[50];

    float area, pib;
    float area2, pib2;

    int pontos_turisticos;
    int pontos_turisticos2;

    unsigned long int populacao;
    unsigned long int populacao2;

    /////cadastro da primeira carta//////

    printf ("\n\n***************************************\n");

    printf ("\n --- Cadastre sua primeira carta ---\n\n");

    printf ("Estado: ");
    fgets (estado, 50, stdin); //ler nome com espaços
    estado [strcspn (estado, "\n")] = 0; //remove o \n gerado pelo enter
   
    printf ("Cidade: ");
    fgets (cidade, 50, stdin); //ler nome com espaços
    cidade [strcspn (cidade, "\n")] = 0; //remove o \n gerado pelo enter

    printf ("Codigo: ");
    scanf ("%s", codigo);
    getchar (); //limpar o buffer do enter (segurança)

    printf ("População: ");
    scanf ("%lu", &populacao);

    printf ("Pontos Turisticos: ");
    scanf ("%d", &pontos_turisticos);

    printf ("Area: ");
    scanf ("%f", &area);

    printf ("Pib: ");
    scanf ("%f", &pib);

    setbuf (stdin, NULL) ;

    //////// ₢adastro da segunda carta ///////// 

    printf ("\n --- Cadastre sua segunda Carta ---\n\n");

    printf ("Estado: ");
    fgets (estado2, 50, stdin); //ler nome com espaços
    estado2 [strcspn (estado2, "\n")] = 0; //remove o \n gerado pelo enter
    
    printf ("Cidade: ");
    fgets (cidade2, 50, stdin); //ler nome com espaços
    cidade2 [strcspn (cidade2, "\n")] = 0; //remove o \n gerado pelo enter
    
    printf ("Codigo: ");
    scanf ("%s", codigo2);
    getchar (); //limpar o buffer do enter (segurança)

    printf ("População: ");
    scanf ("%lu", &populacao2);

    printf ("Pontos Turisticos: ");
    scanf ("%d", &pontos_turisticos2);

    printf ("Area: ");
    scanf ("%f", &area2);

    printf ("Pib: ");
    scanf ("%f", &pib2);

    //////// calculos para densidade populacional, pib per capita, super poder //////

    float densidade_populacional, pib_per_capita;
    float densidade_populacional2, pib_per_capita2;
    float super_poder1, super_poder2;

    densidade_populacional = (float)populacao / area;
    densidade_populacional2 = (float)populacao2 / area2;

    pib_per_capita = (pib * 100000000.0) / (float) populacao;
    pib_per_capita2 = (pib2 * 100000000.0) / (float) populacao2;

    super_poder1 = (float) populacao + (float) pontos_turisticos + area + pib + (1.0 / densidade_populacional) + pib_per_capita;
    super_poder2 = (float) populacao2 + (float) pontos_turisticos2 + area2 + pib2 + (1.0 / densidade_populacional2) + pib_per_capita2;


 
    /////// RESULTADO DO CADASTRO ///////// 

    printf ("\n***************************************\n");

    printf ("\n--- Suas Cartas Cadastradas São ----\n\n");

    printf ("Carta 1 - Estado: %-35s | Carta 2 - Estado: %s\n", estado, estado2);
    printf ("Carta 1 - Cidade: %-35s | Carta 2 - Cidade: %s\n", cidade, cidade2);
    printf ("Carta 1 - Codigo: %-35s | Carta 2 - Codigo: %s\n", codigo, codigo2);
    printf ("Carta 1 - População (Milhões): %-22lu | Carta 2 - População (Milhões): %lu\n", populacao, populacao2);
    printf ("Carta 1 - Densidade Populacional (Hab/Km²): %-9.2f | Carta 2 - Densidade Populacional (Hab/Km²): %.2f\n", densidade_populacional, densidade_populacional2);
    printf ("Carta 1 - Pontos turisticos: %-24d | Carta 2 - Pontos turisticos: %d\n", pontos_turisticos, pontos_turisticos2);
    printf ("Carta 1 - Area (Km²): %-31.2f | Carta 2 - Area (Km²): %.2f\n", area, area2);
    printf ("Carta 1 - Pib (Bilhões): R$ %-25.2f | Carta 2 - Pib (Bilhões): R$ %.2f\n", pib, pib2);
    printf ("Carta 1 - Pib Per Capita : R$ %-23.2f | Carta 2 - Pib Per Capita : R$ %.2f\n", pib_per_capita, pib_per_capita2);
    printf ("Carta 1 - Super Poder : %-29.2f | Carta 2 - Super Poder : %.2f\n", super_poder1, super_poder2);

   /////// Entrada das opções ///////

   int opcao1, opcao2;

   printf ("\n--- Hora Do Combate---\n");

   printf ("\n***************************************\n");

   printf ("\n1. População | 2. Densidade Pupulacional | 3. Pontos turisticos | 4. Area | 5. Pib | 6. Pib Per Capita | 7. Super Poder\n");

   printf ("\nSelecione o Primeiro Atributo: ");
   scanf ("%d", &opcao1);

   printf ("\nSelecione o Segundo atributo: ");
   scanf ("%d", &opcao2);

   if (opcao1 == opcao2){
    printf ("\nOpção Invalida, insira um atributo diferente \n\n");

    return 0;
   }

   ////// Somar atributos //////

   double somar_atributo1 = 0;
   double somar_atributo2 = 0;

   ////// ENTRADA DO SWITCH CASE //////


   switch (opcao1){

    case 1: // população
    
    printf ("Atributo : População\n");
    somar_atributo1 += populacao;
    somar_atributo2 += populacao2;
    printf ("A carta 1 - %s com %lu de habitantes | A carta 2 - %s com %lu de habitantes\n", estado, populacao, estado2, populacao2);
    printf ("Resultado: %s Ganhou !! ", (populacao > populacao2) ? estado : (populacao2 > populacao) ? estado2 : "Empate\n!!");
    break;

    case 2: // Densidade populacional
    
    printf ("Atributo : Densidade Populacional\n");
    somar_atributo1 += (1.0  / densidade_populacional);
    somar_atributo2 += (1.0 / densidade_populacional2);
    printf ("A carta 1 - %s com %f por hab/km²  | A carta 2 - %s com %f por hab/km²\n", estado, densidade_populacional, estado2, densidade_populacional2);
    printf ("Resultado: %s Ganhou !! ", (densidade_populacional < densidade_populacional2) ? estado : (densidade_populacional2 < densidade_populacional) ? estado2 : "Empate\n!!");
    break;

    case 3: // Pontos Turisticos
    
    printf ("Atributo : Pontos turisticos\n");
    somar_atributo1 += pontos_turisticos;
    somar_atributo2 += pontos_turisticos2;
    printf ("A carta 1 - %s com %d pontos turisticos | A carta 2 - %s com %d pontos turisticos\n", estado, pontos_turisticos, estado2, pontos_turisticos2);
    printf ("Resultado: %s Ganhou !! ", (pontos_turisticos > pontos_turisticos2) ? estado : (pontos_turisticos2 > pontos_turisticos) ? estado2 : "Empate\n!!");
    break;

    case 4: // Area
    
    printf ("Atributo : Area\n");
    somar_atributo1 += area;
    somar_atributo2 += area2;
    printf ("A carta 1 - %s com %f Km² | A carta 2 com %s com %f Km²\n", estado, area, estado2, area2);
    printf ("Resultado: %s Ganhou !! ", (area > area2) ? estado : (area2 > area) ? estado2 : "Empate\n!!");
    break;

    case 5: // Pib

    printf ("Atributo : Pib\n");
    somar_atributo1 += pib;
    somar_atributo2 += pib2;
    printf ("A carta 1 com %s com R$ %f Milhões  | A carta 2 com %s com R$ %f Milhões\n", estado, pib, estado2, pib2);
    printf ("Resultado: %s Ganhou !!\n ", (pib > pib2) ? estado : (pib2 > pib) ? estado2 : "Empate\n!!");
    break;

    case 6: // Pib Per Capita
    
    printf ("Atributo : Pib Per Capita\n");
    somar_atributo1 += pib_per_capita;
    somar_atributo2 += pib_per_capita2;
    printf ("A carta 1 - %s com R$ %f | A carta 2 - %s com R$ %f\n", estado, pib_per_capita, estado2, pib_per_capita2);
    printf ("Resultado: %s Ganhou !! ", (pib_per_capita > pib_per_capita2) ? estado : (pib_per_capita2 > pib_per_capita) ? estado2 : "Empate\n!!");
    break;

    case 7: // Super Poder
    
    printf ("Atributo : Super Poder\n");
    somar_atributo1 += super_poder1;
    somar_atributo2 += super_poder2;
    printf ("A carta 1 - %s com %f de Super Poder | A carta 2 com %s com %f de Super Poder\n", estado, super_poder1, estado2, super_poder2);
    printf ("Resultado: %s !! ", (super_poder1 > super_poder2) ? estado : (super_poder2 > super_poder1) ? estado2 : "Empate\n!!");
    break;

    default:
    printf ("Digite um Numero Valido !!\n");
    break;
    

   }

   switch (opcao2) {
      
    case 1: // população
    
    printf ("Atributo : População\n");
    somar_atributo1 += populacao;
    somar_atributo2 += populacao2;
    printf ("A carta 1 - %s com %lu de habitantes | A carta 2 - %s com %lu de habitantes\n", estado, populacao, estado2, populacao2);
    printf ("Resultado: %s Ganhou !! ", (populacao > populacao2) ? estado : (populacao2 > populacao) ? estado2 : "Empate\n!!");
    break;

    case 2: // Densidade populacional
    
    printf ("Atributo : Densidade Populacional\n");
    somar_atributo1 += (1.0 / densidade_populacional);
    somar_atributo2 += (1.0 / densidade_populacional2);
    printf ("A carta 1 - %s com %f por hab/km²  | A carta 2 - %s com %f por hab/km²\n", estado, densidade_populacional, estado2, densidade_populacional2);
    printf ("Resultado: %s Ganhou !! ", (densidade_populacional < densidade_populacional2) ? estado : (densidade_populacional2 < densidade_populacional) ? estado2 : "Empate\n!!");
    break;

    case 3: // Pontos Turisticos
    
    printf ("Atributo : Pontos turisticos\n");
    somar_atributo1 += pontos_turisticos;
    somar_atributo2 += pontos_turisticos2;
    printf ("A carta 1 - %s com %d pontos turisticos | A carta 2 - %s com %d pontos turisticos\n", estado, pontos_turisticos, estado2, pontos_turisticos2);
    printf ("Resultado: %s Ganhou !! ", (pontos_turisticos > pontos_turisticos2) ? estado : (pontos_turisticos2 > pontos_turisticos) ? estado2 : "Empate\n!!");
    break;

    case 4: // Area
    
    printf ("Atributo : Area\n");
    somar_atributo1 += area;
    somar_atributo2 += area2;
    printf ("A carta 1 - %s com %f Km² | A carta 2 com %s com %f Km²\n", estado, area, estado2, area2);
    printf ("Resultado: %s Ganhou !! ", (area > area2) ? estado : (area2 > area) ? estado2 : "Empate\n!!");
    break;

    case 5: // Pib

    printf ("Atributo : Pib\n");
    somar_atributo1 += pib;
    somar_atributo2 += pib2;
    printf ("A carta 1 com %s com R$ %f Milhões  | A carta 2 com %s com R$ %f Milhões\n", estado, pib, estado2, pib2);
    printf ("Resultado: %s Ganhou !!\n ", (pib > pib2) ? estado : (pib2 > pib) ? estado2 : "Empate\n!!");
    break;

    case 6: // Pib Per Capita
    
    printf ("Atributo : Pib Per Capita\n");
    somar_atributo1 += pib_per_capita;
    somar_atributo2 += pib_per_capita2;
    printf ("A carta 1 - %s com R$ %f | A carta 2 - %s com R$ %f\n", estado, pib_per_capita, estado2, pib_per_capita2);
    printf ("Resultado: %s Ganhou !! ", (pib_per_capita > pib_per_capita2) ? estado : (pib_per_capita2 > pib_per_capita) ? estado2 : "Empate\n!!");
    break;

    case 7: // Super Poder
    
    printf ("Atributo : Super Poder\n");
    somar_atributo1 += super_poder1;
    somar_atributo2 += super_poder2;
    printf ("A carta 1 - %s com %f de Super Poder | A carta 2 com %s com %f de Super Poder\n", estado, super_poder1, estado2, super_poder2);
    printf ("Resultado: %s !! ", (super_poder1 > super_poder2) ? estado : (super_poder2 > super_poder1) ? estado2 : "Empate\n!!");
    break;

    default :
    printf ("Opção invalida, digite uma valida !!\n");
    break;

   }


   ////// RESULTADO DAS VARIAVEIS SOMAR ATRIBUTO ///////

   printf ("\n#######################################\n");
   printf ("\n === Resultado Final da Batalha ===\n");

   if ( somar_atributo1 > somar_atributo2){

    printf ("\nParabéns, a carta 1 - %s\nCom a soma de %.2lf pontos, Parabéns !!!\n", estado, somar_atributo1);
   
    }

   else if ( somar_atributo2 > somar_atributo1 ){

    printf ("\nParabéns, a carta 2 - %s\nCom a soma de %.2lf pontos, Parabéns !!!\n", estado2, somar_atributo2);
    }

    else {

        printf ("Empate !!!\n");
    }


   
    
   return 0;
}
