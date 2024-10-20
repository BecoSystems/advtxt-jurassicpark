/***************************************************************************
 *   ex11.c                                   Version 20241020.134718      *
 *                                                                         *
 *   <+#BRIEF#;R++++++++++++++++++++++++++++++++++++++++++++++++++++++++++>*
 *   Copyright (C) 2024         by Vinicius Bezerra Lins                   *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Vinicius Bezerra Lins                                                 *
 *   Email: vbl1@poli.br                                                   *
 *   Webpage: http://<+$WEBPAGE$;R++++++++++++++++++++++++++++++++++++++++>*
 *   Phone: 81998681224                                                    *
 ***************************************************************************/

/*
 * Instrucoes para compilar:
 * $gcc ex11.c -o ex11.x -Wall -Wextra -g -O0 -DDEBUG=1
 * opcoes extras: -ansi -pedantic-errors
 */

/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* #include <time.h> */ /* Time and date functions */
/* #include <math.h> */ /* Mathematics functions */
/* #include <string.h> */ /* Strings functions definitions */
/* #include "libeco.h" */ /* I/O, Math, Sound, Color, Portable Linux/Windows */
/* #include "ex11.h" */ /* To be created for this template if needed */

/* ---------------------------------------------------------------------- */
/* definitions */

#ifndef VERSION /* gcc -DVERSION="0.1.160612.142306" */
#define VERSION "20241020.134718" /* Version Number (string) */
#endif

/* Debug */
#ifndef DEBUG /* gcc -DDEBUG=1 */
#define DEBUG 0 /* Activate/deactivate debug mode */
#endif

#if DEBUG==0
#define NDEBUG
#endif
/* #include <assert.h> */ /* Verify assumptions with assert. Turn off with #define NDEBUG */

/* Debug message if DEBUG on */
#define IFDEBUG(M) if(DEBUG) fprintf(stderr, "[DEBUG file:%s line:%d]: " M "\n", __FILE__, __LINE__); else {;}

/* limits */
#define SBUFF 256 /* string buffer */

/* ---------------------------------------------------------------------- */
/* prototypes */

void help(void); /* print some help */
void copyr(void); /* print version and copyright information */
void print_intro();
void obj_errado();
void print_des();
void verbo_errado();
void print_vitoria();

/* ---------------------------------------------------------------------- */
/* This function does ...
 *
 * It receives as input ...
 *
 * It returns ...
 */
int main(void)
{
    int objCerto;
    int verboCerto;

    print_intro();
    scanf("%i", &objCerto);
    if(objCerto != 1) {
        obj_errado();
        return 0;
    }

    print_des();
    scanf("%i", &verboCerto);
    if(verboCerto != 1) {
        verbo_errado();
    }
    else {
    print_vitoria();
    }

    return EXIT_SUCCESS;
}

/* add more functions here */

void print_intro(void)
{
    printf("Bem vindo ao Parque dos Dinossauros, um jogo onde a adaptação é essencial, faça as melhores escolhas e seja recompesando, boa sorte!\n\n");
    printf("\nVocê acorda no meio de uma floresta, meio perdido, sem saber exatamente onde está, começa a andar e procurar por informações, chegando perto de um campo aberto, vê uma placa, PERIGO: ZONA DE POUSO, confuso, você olha para o céu, mas percebe que não há nada, continua andando até que enxerga um prédio no final daquele terreno, intrigado, seu personagem se aproxima do local, depois de alguns passos o chão estremece, ele nota o que parece ser um animal gigante atrás de algumas árvores, é um braquiossauro, assustado, você percebe que está num parque de dinossauros, corre em direção ao laboratório, quando escuta um rugido distante, é um Tiranossauro Rex usando uma mochila a jato. Desesperado, percebe que possui um chiclete em seu bolso e mais à frente uma bazuca está encostada numa árvore.\n");
    printf("\nPense bem! O que você deve fazer ?\n\n");
    printf("Escolha um objeto: 1.Chiclete\n                   2.Bazuca\n\n");
    printf("Digite o número correspondente:");
    return;
}

void obj_errado(void)
{
    printf("\n\nVocê decide pegar a bazuca e atirar no T-Rex, porém a arma falha e explode. Este é o seu fim meu amigo!\n\n");
    return;
}

void print_des(void) {
    printf("Você decide pegar o chiclete, masca e assopra até fazer uma bolha gigante que te faz flutuar e escapar momentaneamente.\n\n");
    printf("Qual será sua próxima ação ?\n\n");
    printf("Escolha uma opção: 1.Estourar a bolha\n                   2.Continuar flutuando\n\n");
    printf("Digite o número correspondente:");
    }

void verbo_errado(void) {
    printf("\nVocê decide continuar flutuando até alcançar um lugar alto para se abrigar. No topo do prédio, infelizmente você dá de cara com um velociraptor, que te devora. É uma pena colega, sua jornada acabou.\n");
}

void print_vitoria(void) {
    printf("\n\nVocê estoura a bolha de chiclete, caindo em cima da mochila a jato do T-rex, ativa o protocolo de auto destruição dela e sai correndo. Parabéns você está vivo, chegou no laboratório e conseguiu pedir ajuda, o resgate chegou, VITÓRIA.\n");
}


/* ---------------------------------------------------------------------- */
/* Prints help information
 *  usually called by opt -h or --help
 */
void help(void)
{
    IFDEBUG("help()");
    printf("%s - %s\n", "ex11", "<+#BRIEF#+>");
    printf("\nUsage: %s\n\n", "ex11");
    printf("This program does...\n");
    /* add more stuff here */
    printf("\nExit status:\n\t0 if ok.\n\t1 some error occurred.\n");
    printf("\nTodo:\n\tLong options not implemented yet.\n");
    printf("\nAuthor:\n\tWritten by %s <%s>\n\n", "Vinicius Bezerra Lins", "vbl1@poli.br");
    return;
}

/* ---------------------------------------------------------------------- */
/* Prints version and copyright information
 *  usually called by opt -V
 */
void copyr(void)
{
    IFDEBUG("copyr()");
    printf("%s - Version %s\n", "ex11", VERSION);
    printf("\nCopyright (C) %d %s <%s>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n", 2024, "Vinicius Bezerra Lins", "vbl1@poli.br");
    return;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */



