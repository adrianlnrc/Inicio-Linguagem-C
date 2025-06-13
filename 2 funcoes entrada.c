#include <stdio.h>
#include <stdlib.h>


int main()
{
    //armazena o numero secreto  e o chute do usuario
    int numero = 8;
    int chute;

    //guarda o chute do usuario na variavel
    printf("chute um numero de 0 a 10:\n");
    scanf("%d", &chute);


    // se o chute do usuario for diferente de 8 ele errou se nao, da os parabens a ele
    if(chute != 8)
    {
        printf("voce errou, o numero era: %d\n", numero);
        exit(1);
    }
    else
    {
        printf("Parabens, voce acertou o numero %d",chute);
    }

}