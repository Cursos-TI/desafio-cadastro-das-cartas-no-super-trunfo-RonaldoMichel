#include <stdio.h>

// Definição da estrutura da carta
struct Carta {
    char codigo[4]; // Código da cidade (ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1, carta2;
    
    // Cadastro da primeira carta
    printf("Digite o código da primeira carta: ");
    scanf("%s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    // Cadastro da segunda carta
    printf("\nDigite o código da segunda carta: ");
    scanf("%s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    // Exibição dos dados cadastrados
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    
    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    
    return 0;
}
