#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int n;

    printf("Digite um numero: ");
    fflush(stdout);
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (n <= 1) {
        printf("O numero %d nao e primo.\n", n);
        return 0;
    }

    bool eh_primo = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            eh_primo = false;
            break;            
        }
    }

    if (eh_primo) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
    }

    return 0;
}
