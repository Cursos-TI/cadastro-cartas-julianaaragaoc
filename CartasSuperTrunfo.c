#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  printf("Desafio Xadrez!\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;  
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2, PIBperCapita1, PIBperCapita2;
    float superPoder1, superPoder2;
    
  // Área para entrada de dados
 printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float)  pontosTuristicos1 + PIBperCapita1 + (1/densidade1);

    // Entrada dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float)  pontosTuristicos2 + PIBperCapita2 + (1/densidade2);

  // Área para exibição dos dados da cidade
printf("\n\n=== Dados das Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f bilhões de reais\n", PIBperCapita1);
    printf("Super poder: %.2f \n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f bilhões de reais\n", PIBperCapita2);
    printf("Super poder: %.2f \n", superPoder2);

  //Comparação de Cartas;
  printf("\n===Comparação de Cartas===\n");
  
  printf("\nComparação de População:\n");
  if(populacao1>populacao2){
    printf("Carta 1 venceu! População: %d\n", populacao1);
  } else {
    printf("Carta 2 venceu! População: %d\n", populacao2);
  }

  printf("\nComparação de Área:\n");
  if(area1>area2){
    printf("Carta 1 venceu! Área (Km²): %.2f\n", area1);
  } else {
    printf("Carta 2 venceu! Área (Km²): %.2f\n", area2);
  }
  
 printf("\nComparação de PIB:\n");
  if(pib1>pib2){
    printf("Carta 1 venceu! PIB (bilhões de reais): %.2f\n", pib1);
  } else {
    printf("Carta 2 venceu! PIB (bilhões de reais): %.2f\n", pib2);
  }
  
  printf("\nComparação de Pontos Turísticos:\n");
  if(pontosTuristicos1>pontosTuristicos2){
    printf("Carta 1 venceu! Pontos Turísticos: %d\n", pontosTuristicos1);
  } else {
    printf("Carta 2 venceu! Pontos Turísticos: %d\n", pontosTuristicos2);
  }
  
   printf("\nComparação de Densidade Populacional:\n");
  if(densidade1<densidade2){
    printf("Carta 1 venceu! Densidade Populacional: %.2f\n", densidade1);
  } else {
    printf("Carta 2 venceu! Densidade Populacional: %.2f\n", densidade2);
  }
  
 printf("\nComparação de PIB per Capita:\n");
  if(PIBperCapita1>PIBperCapita2){
    printf("Carta 1 venceu! PIB per Capita: %.2f\n", PIBperCapita1);
  } else {
    printf("Carta 2 venceu! PIB per Capita: %.2f\n", PIBperCapita2);
  }

   printf("\nComparação de Super Poder:\n");
  if(superPoder1>superPoder2){
    printf("Carta 1 venceu! Super Poder: %.2f\n", superPoder1);
  } else {
    printf("Carta 2 venceu! Super Poder: %.2f\n", superPoder2);
  }

return 0;
} 
