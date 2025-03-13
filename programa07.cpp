
#include <iostream>

int main() {

    int x, y;
    char c;

    scanf("%d %c %d", &x, &c, &y);

    if (c == '+') {
        printf("SOMA = %d\n", x+y);
    }
    else if (c == '-') {
        printf("SUBTRACAO = %d\n", x-y);
    }
    else if (c == '*') {
        printf("MULTIPLICACAO = %d\n", x*y);
    }
    else if (c == '/') {
        printf("DIVISAO = %d\n", x/y);
    }
    else {
        printf("Opcao invalida!");
    }

    return 0;
}
