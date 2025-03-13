//Tarefa 2 - Aprovado/Reprovado
//Estrutura Condicional

#include <iostream>

int main() {
    int p1, p2, p3;
    float media;

    scanf("%d %d %d", &p1, &p2, &p3);

    media = (p1 + p2 + p3) / 3.0;

    if (media >= 5.0) {
        printf("Aprovado\n");
    }
    else {
        printf("Recuperacao\n");
    }
    printf("Media: %.1f\n", media);
    return 0;
}
