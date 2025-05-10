/*7 - Crie um programa que desafia o usuário digitar um número maior que 40, que seja múltiplo de 5 e 7. Se ele conseguir, deve receber uma mensagem de parabéns.*/

#include <stdio.h>

int main(void) {
    int numeroEscolhido;
    printf("Digite aqui um número maior que 40\n");
    scanf("%d", &numeroEscolhido);

    if (numeroEscolhido % 5 == 0 && numeroEscolhido % 7 == 0 && numeroEscolhido > 40) {
        printf("Parabéns! Você acertou o número %d é um número múltiplo de 5 e 7\n", numeroEscolhido);
    }
    else {
        printf("Ops, esse número não é múltiplo de 5 e 7\n");
    }

    return 0;
}
