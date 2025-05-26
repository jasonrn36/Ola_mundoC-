#include <stdio.h>
#include <stdlib.h>

void* aloca_memoria(size_t tamanho) {
    void* ptr = malloc(tamanho);
    if (ptr == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    return ptr;
}

int main() {
    int* vetor = (int*) aloca_memoria(5 * sizeof(int));

    // Inicializando o vetor
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 10;
    }

    // Imprimindo valores
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberando memória
    free(vetor);

    return 0;
}
