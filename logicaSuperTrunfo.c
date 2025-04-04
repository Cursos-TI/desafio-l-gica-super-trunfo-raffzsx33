#include <stdio.h>

int main() {

    printf ("Desafio Super Trunfo!\n");


    printf ("CARTA 1\n");

    char Estado1 [20],Estado2 [20];
    char CodCarta1[20],CodCarta2[20]; // Código da carta
    char Cidade1[20],Cidade2 [20];
    int População1,População2;
    float Área1,Área2;
    float PIB1,PIB2;
    int NPturísticos1,NPturísticos2; // Número de pontos turísticos


    printf ("Digite Estado da sua cidade: \n");
    scanf ("%s", &Estado1);

    printf ("Digite o código da sua carta: \n");
    scanf ("%s", &CodCarta1);

    printf ("Digite o nome da sua cidade: \n");
    scanf ("%s", &Cidade1);

    printf ("Digite o número da População: \n");
    scanf ("%d", &População1);

    printf ("Digite o número da Área: \n");
    scanf ("%f", &Área1);

    printf ("Digite o número do PIB: \n");
    scanf ("%f", &PIB1);

    
    printf ("Digite o número de pontos turísticos da sua cidade: \n");
    scanf ("%d", &NPturísticos1);

    //SEGUNDA CARTA

    printf ("CARTA 2\n");


    printf ("Digite Estado da sua cidade: \n");
    scanf ("%s", &Estado2);

    printf ("Digite o código da sua carta: \n");
    scanf ("%s", &CodCarta2);

    
    printf ("Digite o nome da sua cidade: \n");
    scanf ("%s", &Cidade2);

    printf ("Digite o número da População: \n");
    scanf ("%d", &População2);

    printf ("Digite o número da Área: \n");
    scanf ("%f", &Área2);

    printf ("Digite o número do PIB: \n");
    scanf ("%f", &PIB2);

    
    printf ("Digite o número de pontos turísticos da sua cidade: \n");
    scanf ("%d", &NPturísticos2);


    printf ("CARTA1: \n"); 

    
    printf ("Estado: %s\n",Estado1);
    printf ("Código da carta: %s\n",CodCarta1);
    printf ("Nome da Cidade: %s\n",Cidade1);
printf ("População:  %d\n", População1);
printf ("Área:  %f\n", Área1);
printf ("PIB:  %f\n", PIB1);
printf ("Número de pontos turísticos:  %d\n", NPturísticos1);

    printf ("CARTA2: \n");


 printf ("Estado: %s\n",Estado2);
    printf ("Código da carta: %s\n",CodCarta2);
printf ("Nome da Cidade: %s\n",Cidade2);
printf ("População:  %d\n", População2);
printf ("Área:  %f\n", Área2);
printf ("PIB:  %f\n", PIB2);
printf ("Número de pontos turísticos:  %d\n", NPturísticos2);

    
    if (População1 > População2 ) {
        printf("A população da carta 1 é maior! Carta 1 vence.\n");
      } else {
        printf("A população da carta 2 é maior! Carta 2 vence.\n");
      }


    return 0;

    /*
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uama cadeia (string) de caracteres.

    */

}