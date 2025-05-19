#include <stdio.h>

int main() {
    // Carta 1
    float populacao = 11.0000;
    float area = 240.000;
    float pib = 200.0000;
    float pontos_turisticos = 4.0;
    float densidade_populacional = area / populacao;
    float PIB_per_capita = pib / populacao;
    float inverso_densidade = 1.0 / densidade_populacional;

    float super_poder = populacao + area + pib + pontos_turisticos + PIB_per_capita + inverso_densidade;

    printf("Carta 1\n");
    printf("Estado: A \n");
    printf("Codigo: A01 \n");
    printf("Nome Da Cidade: São Paulo \n");
    printf("População: %.4f\n", populacao);
    printf("Área: %.3f km²\n", area);  
    printf("PIB: R$ %.2f bilhões\n", pib);  
    printf("Pontos turísticos: %.3f\n", pontos_turisticos);
    printf("Densidade Populacional: %.3f km²/hab\n", densidade_populacional);
    printf("PIB per capita: R$ %.3f reais\n", PIB_per_capita);
    printf("Super Poder: %.3f\n", super_poder);

    printf("=====================\n\n");

    // Carta 2
    float populacao_ = 80;
    float area_ = 430.0000;
    float pib_ = 250.0000;
    float pontos__turisticos = 2.0;
    float densidade_populacional_ = area_ / populacao_;
    float PIB_per_capita_ = pib_ / populacao_;
    float inverso__densidade = 1.0 / densidade_populacional_; // CORRIGIDO AQUI

    float super__poder = populacao_ + area_ + pib_ + pontos__turisticos + PIB_per_capita_ + inverso__densidade;

    printf("Carta 2\n");
    printf("Estado: B \n");
    printf("Codigo: B01 \n");
    printf("Nome Da Cidade: Rio De Janeiro \n");
    printf("População: %.4f\n", populacao_);
    printf("Área: %.3f km²\n", area_);  
    printf("PIB: R$ %.2f bilhões\n", pib_);  
    printf("Pontos turísticos: %.3f\n", pontos__turisticos);
    printf("Densidade Populacional: %.3f km²\n", densidade_populacional_);
    printf("PIB per capita: R$ %.3f reais\n", PIB_per_capita_);
    printf("Super Poder: %.3f\n", super__poder);

    printf("===========================\n\n");

    // Comparações com nomes modifcados para evitar conflito
    int v_populacao = populacao > populacao_;
    int v_area = area > area_;
    int v_pib = pib > pib_;
    int v_pontos_turisticos = pontos_turisticos > pontos__turisticos;
    int v_densidade = densidade_populacional < densidade_populacional_;  
    int v_pib_per_capita = PIB_per_capita > PIB_per_capita_;
    int v_super_poder = super_poder > super__poder;

    printf("População: Carta 1 venceu (%d)\n", v_populacao);
    printf("Área: Carta 1 venceu (%d)\n", v_area);
    printf("PIB: Carta 1 venceu (%d)\n", v_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", v_pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", v_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", v_pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", v_super_poder);

    return 0;
}
