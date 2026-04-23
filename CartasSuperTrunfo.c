#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Carta [50];
  char Pais [50];
  char Estado [50];
  char Cidade [50];
  int Populacao;
  float Area;
  float Pib;
  int Pontosturisticos;
  
  // Área para entrada de dados
  printf("digite sua carta:\n", Carta);
  scanf("%s", &Carta);

  printf("digite o pais:\n", Pais);
  scanf("%s", &Pais);

  printf("digite o estado:\n", Estado);
  scanf("%s", &Estado);

  printf("digite a cidade:\n", Cidade);
  scanf("%s", &Cidade);

  printf("digite a população:\n", Populacao);
  scanf("%d", &Populacao);

  printf(" digite a Área:\n", Area);
  scanf("%f", &Area);

  printf("digite o PIB:\n", Pib);
  scanf("%f", &Pib);

  printf("digite os Pontos turisticos:\n", Pontosturisticos);
  scanf("%d", &Pontosturisticos);

  // Área para exibição dos dados da cidade
  printf(" - Carta: %s\n - Pais: %s\n", Carta, Pais);
  printf(" - Estado: %s\n - Cidade: %s\n", Estado, Cidade);
  printf(" - População: %d\n - Área: %.2f ", Populacao, Area);
  printf(" - PIB: %f - Pontos Turisticos: %d\n", Pib, Pontosturisticos);
  
  
return 0;
} 
