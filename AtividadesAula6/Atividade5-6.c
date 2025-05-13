#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int numero_sorteado1 = (rand() % 5) + 1;
    int numero_sorteado2 = (rand() % 5) + 1;
    int numero_usuario, numero_usuario2;
    
    printf("\nOlá, escolha dois números entre 1 e 5!\n");
    printf("Escreva aqui:\n");
    
    scanf("%d", &numero_usuario);
    scanf("%d", &numero_usuario2);
    
    printf("Você ganha se os dois números escolhidos forem iguais aos números sorteados.\n");

    if (numero_usuario == numero_sorteado1 && numero_usuario2 == numero_sorteado2) {
        printf("🎉 Parabéns! Você acertou os dois números sorteados (%d e %d)! 🥳🥳\n", numero_sorteado1, numero_sorteado2);
    } else if (numero_usuario == numero_sorteado1 || numero_usuario2 == numero_sorteado2) {
        printf("⚠️ Você acertou **um** dos números sorteados! O primeiro sorteado foi %d, e o segundo %d.\n", numero_sorteado1, numero_sorteado2);
    } else {
        printf("❌ Ahn, não foi dessa vez 😒. Tente novamente mais tarde.\n");
    }
    
    return 0;
}