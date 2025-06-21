#include <stdio.h>
int main () {
    int torre = 0, bispo = 0, rainha = 0;

    
    //mover a torre 5 casas para a direita.

    printf ("Torre:\n");

    do { 
        printf ("Direita\n"); //direção do movimento.
        torre++; 
    } while (torre < 5);
    
    printf ("\n");
    printf ("Bispo:\n");

    //mover o bisco cinco casas na diagonal para direita.
    
    for (bispo; bispo < 5; bispo++) {
        printf ("Cima - ");
        printf ("Direita\n"); //direção dos dois movimentos.
    }

    printf ("\n");
    printf ("Rainha:\n");

    //mover rainha 8 casas para a esquerda.
    while (rainha < 8) {
        printf ("Esquerda\n"); //direção do movimento.
        rainha++; 
    }
    
    printf ("\n");
    printf ("Cavalo:\n");

     //mover cavalo 2 casas para baixo e uma à esquerda.

    for (int cavalo = 0; cavalo < 1; cavalo ++) {
        int cavalovertical = 0;
        while (cavalovertical < 2) {
        
        printf ("Baixo\n");

        cavalovertical++;
    }
    
    printf ("Esquerda\n"); 
}

    return 0;
}

   