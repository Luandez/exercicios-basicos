
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    double a, b, c, r1, r2, delta, raiz_delta;

        printf("Digite o valor de A: ");
        fflush(stdout);
        scanf("%lf", &a);
    
        printf("Digite o valor de B: ");
        fflush(stdout);
        scanf("%lf", &b);

        printf("Digite o valor de C: ");
        fflush(stdout);
        scanf("%lf", &c);

        delta = (b * b) - (4 * a * c);

        if (a == 0 || delta < 0)
        {
            printf("Impossivel calcular\n");
        }
        else
        {
            raiz_delta = sqrt(delta);
            r1 = (-b + raiz_delta) / (2 * a);
            r2 = (-b - raiz_delta) / (2 * a);

            printf("R1 = %.5f\n", r1);
            printf("R2 = %.5f\n", r2);
        }

        return 0;
    }