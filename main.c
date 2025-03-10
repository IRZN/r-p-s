#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pe, pa, tes, maq, esc;
    pe = 1;
    pa = 2;
    tes = 3;

    srand(time(NULL));
    maq = 1+ rand() % 3;

    printf("Escolha entre: \n1 - Pedra \n2 - Papel \n3 - Tesoura \n");
    scanf("%i", &esc);

if (esc == maq) {
        printf("EMPATE!");
    } else if (esc == pe && maq == tes) {
        printf ("VOCE GANHOU!");
    } else if (esc == pe && maq == pa) {
        printf ("VOCE PERDEU!");
    } else if (esc == tes && maq == pa) {
        printf ("VOCE GANHOU!");
    } else if (esc == tes && maq == pe) {
        printf("VOCE PERDEU!");
    } else if (esc == pa && maq == pe) {
        printf ("VOCE GANHOU!");
    } else if (esc == pa && maq == tes) {
        printf ("VOCE PERDEU!");
    }
if (esc == pe) {
        printf ("\nVoce escolheu pedra!");
    } else if (esc == pa) {
        printf ("\nVoce escolheu papel!");
    } else if (esc == tes) {
        printf ("\nVoce escolheu tesoura");
    }
if (maq == pe) {
        printf ("\nA maquina escolheu pedra!");
    } else if (maq == pa) {
        printf ("\nA maquina escolheu papel!");
    } else if (maq == tes) {
        printf ("\nA maquina escolheu tesoura!");
    }
    return 0;
}
