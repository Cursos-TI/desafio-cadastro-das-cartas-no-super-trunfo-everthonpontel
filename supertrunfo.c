#include <stdio.h>

int main() {
   

    //carta 1
    // valores fixos 
    float populacao = 11.0000;
    float area = 240.000;
    float pib = 200.0000;
    float pontos_turisticos = 4.0;
    float densidade_populacional = area / populacao;
    float PIB_per_capita = pib / populacao;
   
    //  título
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
   
    printf("=====================\n\n");
    
    //carta 2
    // valores fixos
    float populacao_ = 80;
    float area_ = 430.0000;
    float pib_ = 250.0000;
    float pontos__turisticos = 2.0;
    float densidade_populacional_ = area_ / populacao_;
    float PIB_per_capita_ = pib_ / populacao_;
    
    //titulo
    printf("Carta 2\n");

    printf("Estado: B \n");
    printf("Codigo: B01 \n");
    printf("Nome Da Cidade: Rio De Janeiro \n");
    printf("População: %.4f\n", populacao_);
    printf("Área: %.3f km²\n", area_);  
    printf("PIB: R$ %.2f bilhões\n", pib);  
    printf("Pontos turísticos: %.3f\n", pontos__turisticos);
    printf("Densidade Populacional: %.3f km²\n", densidade_populacional_);
    printf("PIB per capita: R$ %.3f reais\n", PIB_per_capita_);



    return 0;
}