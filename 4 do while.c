#include <stdio.h>
#include <stdlib.h>


int main()
{
int num;

//garante pelo menos uma execucao, verificando a condicao apenas depois
do
{
    printf("digite um numero positivo");
    scanf("%d", &num);
} while (num <= 0);

//mostra o numero positivo
printf("Seu numero positivo %d", num);

}
