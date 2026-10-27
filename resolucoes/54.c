//Pirâmide invertida
/*
 *  *  *  *  *
  *  *  *  *
   *  *  *
    *  *
     *
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 5;

    for (int l = n; l > 0; l--)
    {
        for (int esp = 0; esp < n - l; esp++)   
        {
            printf(" ");
        }
        for (int ast = 1; ast <= l; ast++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}