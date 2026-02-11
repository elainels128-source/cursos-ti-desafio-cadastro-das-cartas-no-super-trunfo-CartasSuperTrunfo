#include <stdio.h>

int main(){
     
  //  CARTA 01//

  char estado1[3], estado2[3];
  char codigo1[4], codigo2[4];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float pib1, pib2;
  float km1, km2;
  int pontos1, pontos2;

      // ENTRADA DE DADOS DA CARTA 01 //
  printf ("==== Cadrastro da carta 1====\n"); 

  printf("Digite um Estado (Siglas): ");
  scanf("%2s", estado1); 

  printf("Nome da Cidade:\n");
  scanf("%49s", cidade1);

  printf("População:\n");
  scanf ("%d", &populacao1);
  
  printf("Área em KM:\n");
  scanf("%f", &km1);

  printf("PIB: \n");
  scanf("%f", &pib1);

  printf ("Número de Pontos Turísticos: \n");
  scanf("%d",&pontos1);

    //   ENTRADA DE DADOS CARTA 02 //

  printf ("==== Cadrastro de carta 02====\n");

  printf ("Digite um Estado: \n");
  scanf ("%2s", estado2);

  printf("Nome da Cidade:\n");
  scanf("%49s", cidade2);

  printf ("População: \n");
  scanf ("%d", &populacao2);

  printf ("Área em KM:\n");
  scanf("%f", &km2);

  printf("PIB: \n");
  scanf ("%f", &pib2);

  printf ("Número de Pontos Turísticos: \n");
  scanf("%d", &pontos2);

  printf("\n");
 
  //APRESENTAÇÃO DAS CARTAS//

  printf("\n=== CARTA 1 ===\n");

  printf("Estado: %s\n", estado1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", km1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Pontos turísticos: %d\n", pontos1);
  
  
  printf("\n=== CARTA 2 ===\n");

  printf("Estado: %s\n", estado2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", km2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);

  return 0;
}