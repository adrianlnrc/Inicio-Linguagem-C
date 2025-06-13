#include <stdio.h>
#include <stdlib.h>


int main()
{
    //armazena o numero secreto  e o chute do usuario
    int numero = 8;
    int chute;


    do{
        printf("\nchute um numero de 0 a 10:  ");
        scanf("%d", &chute);

        if (chute < 0 || chute > 10) {
            printf("Numero invalido, digite um de 0 a 10.\n");
            continue;
        }

        printf("tente novamente.\n");
        
        
       } while (chute != numero);
    
        printf("voce acertou, o numero era %d\n", chute);

        return 0;
        
        
        
    }
    
    
















