#include <stdio.h>
int main () {
    int torre = 0, bispo = 0, rainha = 0;
    //mover a torre 5 casas para a direita.
    do { 
        printf ("Torre: Direita\n"); //direção do movimento.
        torre++; 
    } while (torre < 5);

    //mover o bisco cinco casas na diagonal para direita.
    
    for (bispo; bispo < 5; bispo++) {
        printf ("Bispo: Cima - ");
        printf ("Bispo: Direita\n"); //direção dos dois movimentos.
    }

    //mover rainha 8 casas para a esquerda.
    while (rainha < 8) {
        printf ("Rainha: Esquerda\n"); //direção do movimento.
        rainha++; 
    }
    







    return 0;
}

   