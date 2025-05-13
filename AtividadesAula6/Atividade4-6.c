#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL));
    int numero_sorteado = rand() % 10 + 1;
    tentativas = 3;
    int numero_usuario;
    
    printf("Olá, bem-vindo(a) ao Sorteador\n");
    printf("Escolha número de 1 a 10! Se o seu número escolhido for igual ao sorteado, você ganha.\n");
    printf("Digite aqui o número:");
    
    scanf("%d", &numero_usuario)
    
    if (numero_usuario != numero_sorteado) {
        printf("Foi quase! Tente novamente. Restam "%d" tentativas!", &tentativas - 1);
    }
    
    scanf("%d", &numero_usuario);
    
    if (numero_usuario != numero_sorteado) {
        "Foi quase NOVAMENTE, mas agora saiba que o número sorterteado "
    }
    
}