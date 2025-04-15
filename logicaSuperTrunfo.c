#include <stdio.h>

int main() {

    printf ("Desafio Super Trunfo!\n");


    printf ("CARTA 1\n");

    char Estado1 [20],Estado2 [20];
    char CodCarta1[20],CodCarta2[20]; // Código da carta
    char Cidade1[20],Cidade2 [20];
    float População1,População2;
    float Área1,Área2;
    float PIB1,PIB2;
    int NPturísticos1,NPturísticos2; // Número de pontos turísticos
    float DP1,DP2;   //Densidade Populacional
    float PPC1,PPC2; //PIB per capita 


    printf ("Digite Estado da sua cidade: \n");
    scanf ("%s", &Estado1);

    printf ("Digite o código da sua carta: \n");
    scanf ("%s", &CodCarta1);

    printf ("Digite o nome da sua cidade: \n");
    scanf ("%s", &Cidade1);

    printf ("Digite o número da População: \n");
    scanf ("%f", &População1);

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
    scanf ("%f", &População2);

    printf ("Digite o número da Área: \n");
    scanf ("%f", &Área2);

    printf ("Digite o número do PIB: \n");
    scanf ("%f", &PIB2);

    
    printf ("Digite o número de pontos turísticos da sua cidade: \n");
    scanf ("%d", &NPturísticos2);



    printf ("Estado: %s\n",Estado1);
    printf ("Código da carta: %s\n",CodCarta1);
    printf ("Nome da Cidade: %s\n",Cidade1);
printf ("População:  %f\n", População1);
printf ("Área:  %f\n", Área1);
printf ("PIB:  %f\n", PIB1);
printf ("Número de pontos turísticos:  %d\n", NPturísticos1);


 printf ("Estado: %s\n",Estado2); 
    printf ("Código da carta: %s\n",CodCarta2);
printf ("Nome da Cidade: %s\n",Cidade2);
printf ("População:  %f\n", População2);
printf ("Área:  %f\n", Área2);
printf ("PIB:  %f\n", PIB2);
printf ("Número de pontos turísticos:  %d\n", NPturísticos2);


    DP1 = População1 / Área1;
   printf ("A Densidade Populacional é: %.2f \n", DP1);
    
    DP2 = População2 / Área2;
   printf (" A Densidade Populacional é:  %.2f \n", DP2);

   PPC1 = PIB1 / População1;
   printf ("PIB per capita é: %.2f \n", PPC1);
   
   PPC2 = PIB2 / População2;
   printf ("PIB per capita é: %.2f \n", PPC2);

    return 0;

}