#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pe, pa, tes, maq, esc;
    int i = 0, imaq = 0, iesc = 0;
    pe = 1;
    pa = 2;
    tes = 3;

do {
    srand(time(NULL));
    maq = 1+ rand() % 3;

    printf("Escolha entre: \n1 - Pedra \n2 - Papel \n3 - Tesoura \n");
    scanf("%i", &esc);

if (esc == maq) {
        printf("\nEMPATE! \n");
    } else if (esc == pe && maq == tes) {
        printf ("\nVOCE GANHOU! \n");
        iesc++;
    } else if (esc == pe && maq == pa) {
        printf ("\nVOCE PERDEU! \n");
        imaq++;
    } else if (esc == tes && maq == pa) {
        printf ("\nVOCE GANHOU! \n");
        iesc++;
    } else if (esc == tes && maq == pe) {
        printf("\nVOCE PERDEU! \n");
        imaq++;
    } else if (esc == pa && maq == pe) {
        printf ("\nVOCE GANHOU! \n");
        iesc++;
    } else if (esc == pa && maq == tes) {
        printf ("\nVOCE PERDEU! \n");
        imaq++;
    }
if (esc == pe) {
        printf ("\nVoce escolheu pedra! \n");
    } else if (esc == pa) {
        printf ("\nVoce escolheu papel! \n");
    } else if (esc == tes) {
        printf ("\nVoce escolheu tesoura \n");
    }
if (maq == pe) {
        printf ("\nA maquina escolheu pedra! \n");
    } else if (maq == pa) {
        printf ("\nA maquina escolheu papel! \n");
    } else if (maq == tes) {
        printf ("\nA maquina escolheu tesoura! \n");
    }
i++;
}while (i < 5);
    
    if (imaq > iesc) {
        printf ("\nA maquina ganhou com %d vitorias \n", imaq);
    } else {
        printf ("\nVoce ganhou com %d vitorias \n", iesc);
    }

return 0;
}
