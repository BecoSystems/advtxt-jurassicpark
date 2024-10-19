#include <stdio.h>

void print_intro();
void obj_errado();
void print_des();
void verbo_errado();
void print_vitoria();


int main(void) {

    int objCerto;
    int verboCerto;
    print_intro();
    scanf("%i", &objCerto);
    if(objCerto != 1) {
        obj_errado();
    }
    print_des();
    scanf("%i", &verboCerto);
    if(verboCerto != 1) {
        verbo_errado();
    }
    print_vitoria();

}


void print_intro(void)
{
    printf("Bem vindo ao Parque dos Dinossauros, um jogo onde a adaptação é essencial, faça as melhores escolhas e seja recompesando, boa sorte!\n");
    printf("\nVocê acorda no meio de uma floresta, meio perdido, sem saber exatamente onde está, começa a andar e procurar por informações, chegando perto de um campo aberto, vê uma placa, PERIGO: ZONA DE POUSO, confuso, você olha para o céu, mas percebe que não há nada, continua andando até que enxerga um prédio no final daquele terreno, intrigado, seu personagem se aproxima do local, depois de alguns passos o chão estremece, ele nota o que parece ser um animal gigante atrás de algumas árvores, é um braquiossauro, assustado, você percebe que está num parque de dinossauros, corre em direção ao laboratório, quando escuta um rugido distante, é um Tiranossauro Rex usando uma mochila a jato. Desesperado, percebe que possui um chiclete em seu bolso e mais à frente uma bazuca está encostada numa árvore.\n");
    printf("\nPense bem! O que você deve fazer ?\n");
    printf("Escolha um objeto: 1.Chiclete\n                   2.Bazuca\n");
    printf("Digite o número correspondente:");
    return;
}

void obj_errado(void)
{
    printf("Você decide pegar a bazuca e atirar no T-Rex, porém a arma falha e explode. Este é o seu fim meu amigo!");
    return;
}

void print_des(void) {
    printf("Você decide pegar o chiclete, masca e assopra até fazer uma bolha gigante que te faz flutuar e escapar momentaneamente.\n");
    printf("Qual será sua próxima ação ?\n");
    printf("Escolha uma opção: 1.Estourar a bolha\n          2.Continuar flutuando\n");
    printf("Digite o número correspondente:");
    }

void verbo_errado(void) {
    printf("Você morreu\n");
}

void print_vitoria(void) {
    printf("Você estoura a bolha de chiclete, caindo em cima da mochila a jato do T-rex, ativa o protocolo de auto destruição dela e sai correndo. Parabéns você está vivo.\n");
}
