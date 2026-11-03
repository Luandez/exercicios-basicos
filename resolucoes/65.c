//Admita que i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime?
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1, j = 2, k = 3, m = 2;

    printf("%d\n", i);
    printf("%d\n", j == 3);
    printf("%d\n", i >= 1 && j < 4);
    printf("%d\n", m <= 99 && k < m);
    printf("%d\n", j >= i || k == m);
    printf("%d\n", k + m < j || 3 - j >= k) ;
    printf("%d\n", !m);
    printf("%d\n", ! (j - m));
    printf ("%d\n", ! (k > m) ) ;
    printf("%d\n", ! (j > k));

    return 0;
}