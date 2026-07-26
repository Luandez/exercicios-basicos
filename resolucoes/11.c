//use a funcao para encontrar o conjunto B que atende A
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int B[5];

    printf("Conjunto A = {");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", A[i]);
        if (i < 4) printf(", ");
    }
    printf("}\n");

    // Aplicando a função f(a) = 2a
    printf("\nAplicando f(a) = 2a:\n");
    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i] * 2;
        printf("f(%d) = %d\n", A[i], B[i]);
    }

    printf("\nConjunto B = {");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", B[i]);
        if (i < 4) printf(", ");
    }
    printf("}\n");

    return 0;
}