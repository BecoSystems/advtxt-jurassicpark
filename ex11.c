#include <stdio.h>

void print_intro();
void scan_objeto();

int main(void) {
    int objescolhido;

    print_intro();
    scan_objeto();

}


void print_intro(void)
{
    printf("Bem vindo ao Parque dos Dinossauros, um jogo onde a adaptação é essencial, faça as melhores escolhas e seja recompesando, boa sorte!\n");
    printf("Você acorda no meio de uma floresta, meio perdido, sem saber exatamente onde está, começa a andar e procurar por informações, chegando perto de um campo aberto, vê uma placa, PERIGO: ZONA DE POUSO, confuso, você olha para o céu, mas percebe que não há nada, continua andando até que enxerga um prédio no final daquele terreno, intrigado, seu personagem se aproxima do local, depois de alguns passos o chão estremece, ele nota o que parece ser um animal gigante atrás de algumas árvores, é um braquiossauro, assustado, você percebe que está num parque de dinossauros, corre em direção ao laboratório, quando escuta um rugido distante, é um Tiranossauro Rex usando uma mochila a jato. Desesperado, percebe que possui um chiclete em seu bolso e mais à frente uma bazuca está encostada numa árvore.\n");
    printf("Pense bem! O que você deve fazer ?");
    return;
}

void scan_objeto(void)
{
    int objescolhido;
    printf("Escolha um objeto: 1.Chiclete\n  2.Bazuca\n Digite o número correspondente:");
    scanf("%i", &objescolhido);
    return;
}
