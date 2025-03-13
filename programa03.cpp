//Tarefa 1 - Média
#include <iostream>

int main() {
    int p1, p2, p3;
    float media;

    printf("Digite as tres notas: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    media = (p1 + p2 + p3) / 3.0;

    printf("MEDIA = %f", media);
    return 0;
}
